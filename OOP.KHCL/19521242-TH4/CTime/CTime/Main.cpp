#include <iostream>
#include "Time.h"
#include "CTimeSpan.h"
using namespace std;
int main()
{
	Time a, b,c;
	cin >> a >> b;
	cout << a << endl;
	cout << b << endl;
	c = a + b;
	--a;
	cout << a;
}