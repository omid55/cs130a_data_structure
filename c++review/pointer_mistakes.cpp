//Omid55
#include <iostream>
using namespace std;

int* getPtrToEight()
{
	int x = 8;
	return &x;
}

int* getPtrToTen()
{
	int *x = new int;
	*x = 10;
	return x;
}


int main()
{
	// dangling pointer 1
	int *p;
	if (true)
	{
		int x = 5;
		p = &x;
	}
	cout << *p << endl;

	// dangling pointer 2
	int *p2 = getPtrToEight();
	cout << *p2 << endl;

	// memory Leak
	int *p3;
	for (int i = 0; i < 3; ++i)
	{
		p3 = getPtrToTen();
		cout << *p3 << endl;
		// the cure is:   delete p3;
	}

	// deleting memory that is not allocated (new)
	int x = 12;
	int *xPtr = &x;
	cout << *xPtr << endl;
	delete xPtr;

	return 0;
}


