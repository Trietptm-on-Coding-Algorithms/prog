#!/bin/bash

c_tools() {

	sudo apt-get install -y gcc
	sudo apt-get install -y cmake

}

cpp_tools() {
	sudo apt-get install g++
	sudo apt-get install make
	#boost library
	sudo apt-get install libboost-all-dev

}

java_tools() {
	sudo apt-get install ant
	sudo apt-get install openjdk-7-jre openjdk-7-doc
	sudo apt-get install -y gradle gradle-doc
}


scala() {
	sudo apt-get install scala
}

python() {

	sudo apt-get install python-software-properties
	
}

javascript() {

	sudo add-apt-repository ppa:chris-lea/node.js

	sudo apt-get update
	sudo apt-get install nodejs
	sudo apt-get install -y mongodb mongodb-dev mongodb-server mongodb-clients
	sudo apt-get install -y nodejs nodejs-dbg nodejs-dev
	sudo apt-get install -y npm

}

general_tools() {
	sudo apt-get install cloc
	sudo apt-get install ack-grep
}




vim_setup() {

	mkdir -p ~/.vim/autoload ~/.vim/bundle 


	echo "Installing vim plugin - pathogen vim plugin manager"
	curl 'www.vim.org/scripts/download_script.php?src_id=19375' > ~/.vim/autoload/pathogen.vim
	
	if [ "$?" = "0" ]
	then
	
		echo -e "\n\" Pathogen" >> ~/.vimrc
		echo -e "execute pathogen#infect()" >> ~/.vimrc
		echo -e "call pathogen#helptags()" >> ~/.vimrc
		echo -e "syntax on" >> ~/.vimrc
		echo -e "filetype plugin indent on" >> ~/.vimrc
		echo "Installing pathogen successful"
	else
		echo "ERROR:: downloading pathogen failed"
	fi

	echo "Installing vim plugin nerdtree - Directory browser"
	git clone https://github.com/scrooloose/nerdtree ~/.vim/bundle
	if [ "$?" = "0" ]
	then
		mv ~/.vim/bundle/nerdtree/autoload/nerdtree.vim ~/.vim/autoload
		mv ~/.vim/bundle/nerdtree/autoload/ 
		echo "Nerdtree install success"
	else
		echo "ERROR:: downloading nerdtree failed"
	fi
} 


sudo apt-get install vim
sudo apt-get install git
sudo apt-get install curl


#organization
sudo apt-get install task

#c_tools
#cpp_tools
#java_tools
#scala
#general_tools

#vim_setup


sudo apt-get update

