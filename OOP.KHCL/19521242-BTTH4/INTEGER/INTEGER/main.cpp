#include <iostream>
#include "INTEGER.h"
using namespace std;
int main()
{
	INTEGER a, b, c;
	cin >> a >> b;
	c = a + b;
	cout << c << endl;
	c = a - b;
	cout << c << endl;
	c = a * b;
	cout << c << endl;
	c = a / b;
	cout << c << endl;
	c = a % b;
	cout << c << endl;
	++a;
	--b;
	cout << a << endl;
	cout << b << endl;
}