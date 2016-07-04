#include <string>


namespace libstring {

	using namespace std;
	void initExample() {
		string s1; //string = ""; default init
		string s2 = s1; //s2 is a copy
		string s3 = "hiya"; //literal
		string s4(10, 'c');
	}
	void demo() {
		initExample();

	}

}
