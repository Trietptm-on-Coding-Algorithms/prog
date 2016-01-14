
#ifndef dbee_H
#define  dbee_H

#include <string>
#include <list>
#include <boost/program_options.hpp>

namespace po = boost::program_options;

namespace dbee {

	class data_and_config_loader {
		private:
			std::list< std::string > argument_list;
			bool validate();
		public:
			data_and_config_loader(int arg_number, char* args[]) {
				for(int i = 0; i < arg_number; i++) {
					std::string* arg = new std::string(args[i]);
					argument_list.push_back(*arg);
				}
			};
			std::list< std::string > getList() {
				return this-> argument_list;
			};


	};

	class config {
		public:
			const bool is_file_input;
			const char *file_path;
			config(bool is_file_inputo, char file_patho[]) 
				: is_file_input(is_file_inputo) 
				, file_path{file_patho} 
			{
			}
	};

	class dbeer {

		private:
			config c;

		public:
			dbeer(config c) : c(c) {
			};
			bool validate();
			int execute();


	};

	int exe(int argc, char* argv[]);

}

#endif
