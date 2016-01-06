//Omid55
#include <iostream>
#include <cstdio>
using namespace std;

// If we define pow3 here it doesn't work
//int pow3(int a)
//{
//	return a * pow2(a);
//}

int pow2(int a)
{
	return a * a;
}

int pow3(int a)
{
	return a * pow2(a);
}

int main()
{
	int n = 2;
	cout << "2 cube is: " << pow3(n) << "." << endl;
	return 0;
}

