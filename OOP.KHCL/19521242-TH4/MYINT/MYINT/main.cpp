#include <iostream>
#include "MYINT.h"
using namespace std;
int main()
{
	MYINT a, b, c;
	cin >> a >> b;
	c = a + b;
	cout << c<<endl;
	c = a - b;
	cout << c << endl;
	c = a * b;
	cout << c << endl;
	c = a / b;
	cout << c << endl;
}