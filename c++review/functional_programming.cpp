//Omid55
#include <iostream>
using namespace std;

// If we define pow3 here it doesn't work
//int pow3(int a)
//{
//      return a * pow2(a);
//}

int pow2(int a)               // a to power of two
{
	return a * a;
}

int pow3(int a)              // a to power of 3
{
	return a * pow2(a);
}

int pow_n(int a, int n)      // a to power of n
{
	if(n == 0)
	{
		return 1;
	}

	return pow_n(a, n-1) * a;
}

int main()
{
	int a = 2;
	int n = 5;
	cout << a << " cube is: " << pow3(a) << "." << endl;
	cout << a <<" to " << n << " is: " << pow_n(a, n) << "." << endl;
	return 0;
}

