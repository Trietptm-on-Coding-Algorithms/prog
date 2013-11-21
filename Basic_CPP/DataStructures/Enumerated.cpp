#include <iostream>

int main() {
	enum color { red, green=5, blue} c1;
	c1 = blue; //=6
	c1 = green;
}
