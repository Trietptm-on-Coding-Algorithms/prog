#!/bin/bash

sudo apt-get install python-software-properties

sudo add-apt-repository ppa:chris-lea/node.js
sudo apt-get update
sudo apt-get install nodejs

sudo apt-get install vim git 
sudo npm install -g jshint




mkdir -p ~/.vim/autoload ~/.vim/bundle ~/.vim/ftplugin


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

mkdir ~/.vim/bundle/node
git clone https://github.com/moll/vim-node.git ~/.vim/bundle/node

mkdir ~/.vim/bundle/tabular
git clone https://github.com/godlygeek/tabular.git ~/.vim/bundle/tabular

mkdir ~/.vim/bundle/jslint
git clone https://github.com/hallettj/jslint.vim ~/.vim/bundle/jslint
cp ~/.vim/bundle/jslint/ftplugin/* ~/.vim/ftplugin


mkdir ~/.vim/bundle/jshint/
git clone https://github.com/waolm/jshint.vim ~/.vim/bundle/jshint


mkdir ~/.vim/bundle/vim-javascript-syntax
git clone https://github.com/jelera/vim-javascript-syntax

mkdir ~/.vim/bundle/mango
git clone https://github.com/goatslacker/mango.vim
cd ~/.vim/bundle/mango
make
echo "set background=dark" >> ~/.vimrc
echo "syntax on" >> ~/.vimrc
echo "color mango" >> ~/.vimrc

