//Omid55
#include <iostream>
using namespace std;

struct MyStruct
{
	int a;
	double b;
	char name[25];
};

class MyClass
{
private:
	int x;
	int y;

public:
	MyClass()         		// default constructor
	{
	}

	MyClass(int i)    		// conversion constructor
	{
		x = i;
	}

	MyClass(int x, int y)   // parametric constructor
	{
		this->x = x;
		this->y = y;
	}

	MyClass(MyClass& c)	    // copy constructor
	{
		x = c.x;
		y = c.y;
	}

	~MyClass()
	{
	}

	// Get and Set functions
	int getX()
	{
		return x;
	}

	void setX(int x)
	{
		this->x = x;
	}

	int getY()
	{
		return y;
	}

	void setY(int y)
	{
		this->y = y;
	}
};

class MyClass2
{
private:
	double *a;

public:
	MyClass2(int len)
	{
		a = new double[len];
	}

	~MyClass2()
	{
		delete a;
		cout << "a is deleted" << endl;
	}
};


int main()
{
	MyClass c;
	c = 5;  	// conversion constructor is called here
	cout << c.getX() << endl;

	MyClass2 c2(10);
	return 0;
}

