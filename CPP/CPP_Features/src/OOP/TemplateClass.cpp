
#include <iostream>

//template <class T>
class templateTest
{
	public:
		templateTest();
		void TestMethod();
		void setMethod( int data );
	private:
		int data1;
};

templateTest::templateTest()//<T>()
{
	data1 = 5;
}

void templateTest::TestMethod()
{
	std::cout << "testMethod() " << this->data1 << std::endl;
}

void templateTest::setMethod( int data )
{
	this->data1 = data;
}

int main()
{
	templateTest tT;
	tT.TestMethod();
	tT.setMethod( 25 );
	tT.TestMethod();
}
