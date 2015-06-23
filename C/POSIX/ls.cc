
#include <iostream>
#include <dirent.h>

char* getTypeAsString(unsigned char type) {
	if (type == DT_UNKNOWN) {
		return "Unknown";
	} else if (type == DT_REG) {
		return "Regular file";
	} else if (type == DT_DIR) {
		return "Directory";
	} else if (type == DT_FIFO) {
		return "FIFO file";
	} else if (type == DT_SOCK) {
		return "Local domain socket";
	} else if (type == DT_CHR) {
		return "Character device";
	} else if (type == DT_BLK) {
		return "Block device";
	} else if (type == DT_LNK) {
		return "Symbolic Link";
	} else {
		return "XXXXXXXXXXXXXXXXXXX";
	}
}


int main(int argc, char* argv[]) 
{
	for(int i = 0; i < argc; i++) 
		std::cout << i << ":\t" << argv[i] << std::endl;


	if ( argc != 2) {	
		std::cout << "2 args please" << std::endl;
		return 5;
	}

	DIR* a = opendir(argv[1]);

	if (a==NULL) {
		std::cout << "program returned null" << std::endl;
		return 5;
	}

	struct dirent *entry;

	while ((entry = readdir(a)))
		std::cout << entry->d_name 
			<< "\t:type:" << getTypeAsString(entry->d_type)
			<< "\t:inode:" << entry->d_ino
			<< "\t:reclen:" << entry->d_reclen
			<< std::endl << std::endl;

	
	std::cout << "Type:   " <<  DT_REG << std::endl;
	closedir(a);

	

	//std::cout << a.d_name << std::endl;
	return 5;

}
