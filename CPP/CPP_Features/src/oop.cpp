
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

#include <iostream>

template <class T>
class templateTest
{
	public:
		templateTest( T init );
		void TestMethod();
		void setMethod( T data );
	private:
		T data1;
};

template <class T>
templateTest<T>::templateTest( T init )
{ 
	this->data1 = init;

}

template <class T>
void templateTest<T>::TestMethod()
{
	std::cout << "testMethod() " << this->data1 << std::endl;
}

template <class T>
void templateTest<T>::setMethod( T data )
{
	this->data1 = data;
}

int main()
{
	templateTest<int> tT( 5 );
	tT.TestMethod();
	tT.setMethod( 25 );
	tT.TestMethod();
}
