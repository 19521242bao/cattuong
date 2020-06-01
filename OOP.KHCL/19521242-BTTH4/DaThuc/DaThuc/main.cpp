#include <iostream>
#include "DaThuc.h"
using namespace std;
int main()
{
	DaThuc a, b, c;
	cin >> a >> b;
	cout << a << endl;
	cout << b << endl;
	c = a + b;
	cout << c << endl;
	c = a - b;
	cout << c << endl;
	c = a * b;
	cout << c << endl;
	/*if (a > b)
		cout << "bac a> bac b";*/
	c = --a;//tinh dao ham cua a;
	cout << c << endl;
	c = ++a;//tinh nguyen ham cua a;
	cout << c << endl;

}