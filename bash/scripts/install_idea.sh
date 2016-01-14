#!/usr/bin/env bash

set -e
set -o verbose
echo "Starting install"

if [[ "x$1" -eq "x" ]] 
then
	echo "Must pass in path to zip"
	exit 5
fi

CURRENT_DIR=$(pwd)
ZIP_NAME="$1"
TEMP_DIR=$( mktemp -d )

cp "$ZIP_NAME" "$TEMP_DIR"
cd "$TEMP_DIR"

UNZIP_DIR="zzz"
mkdir "$UNZIP_DIR"
tar xzf "$ZIP_NAME" -C "$UNZIP_DIR" 2> /dev/null


UNZIPPED_PACKAGE=$( find "$UNZIP_DIR" -maxdepth 1 -type d -regex "${UNZIP_DIR}/idea.*" )


if [[ "x${UNZIPPED_PACKAGE}" = "x" ]]
then
	echo "cannot find package after unzip"
	exit 5
fi

BASE_FILE_NAME=$( basename "${UNZIPPED_PACKAGE}")
if [[ -e "/usr/local/lib/${BASE_FILE_NAME}" ]]
then
	echo "Attempting to remove current install"
	sudo rm -rf "/usr/local/lib/${BASE_FILE_NAME}"
fi

sudo mv "$UNZIPPED_PACKAGE" /usr/local/lib
sudo chown -R root "/usr/local/lib/${BASE_FILE_NAME}"
sudo chmod -R 555 "/usr/local/lib/${BASE_FILE_NAME}"

if [[ -h /usr/local/bin/idea ]]
then
	echo "Attempting to remove old install"
	sudo rm /usr/local/bin/idea
fi


echo 



CUSTOM_START_SCRIPT_PATH="/usr/local/lib/${BASE_FILE_NAME}/idea_starter.sh"

echo "${START_SCRIPT}"

echo "#!/usr/bin/env bash"  | sudo tee "$CUSTOM_START_SCRIPT_PATH" > /dev/null
echo "(nohup /usr/local/lib/${BASE_FILE_NAME}/bin/idea.sh &> /dev/null & )" | sudo tee --append   "$CUSTOM_START_SCRIPT_PATH" > /dev/null

sudo chmod 555 "${CUSTOM_START_SCRIPT_PATH}"
sudo ln -s  "${CUSTOM_START_SCRIPT_PATH}" "/usr/local/bin/idea"

echo "install complete"

cd "${CURRENT_DIR}"
