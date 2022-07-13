#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int a[5] = { 1,2,3,4,5 };

	void* p = a;

	cout << *(int*)p+20  <<endl;

	//cout << p<<" "<<a << endl;

	//cout << sizeof(a)/sizeof(int) << endl;
}