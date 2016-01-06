//Omid55
#include <iostream>
using namespace std;

void valueSwap(int t1, int t2)
{
	int tmp(t1);    // it is the same as:  int tmp = t1;
	t1 = t2;
	t2 = tmp;
}

void referenceSwap(int& t1, int& t2)
{
    int tmp(t1);
    t1 = t2;
    t2 = tmp;
}

void pointerSwap(int *t1, int* t2)
{
    int tmp(*t1);
    *t1 = *t2;
    *t2 = tmp;
}


int main()
{
	int i = 42, j = 10;

	valueSwap(i, j);
	cout << "i: " << i << ", j: " << j << endl;

	referenceSwap(i, j);
	cout << "i: " << i << ", j: " << j << endl;

	int* pi = &i, *pj = &j;

	pointerSwap(pi, pj);
	cout << "i: " << i << ", j: " << j << endl;

	return 0;
}


