
#include <iostream>
#include "CTimeSpan.h"
using namespace std;
int main()
{
	CTimeSpan a, b, c;
	cin >> a >> b;
	cout << a << b;
	c = a + b;
	cout << c;
	c = a - b;
	cout << c;
}