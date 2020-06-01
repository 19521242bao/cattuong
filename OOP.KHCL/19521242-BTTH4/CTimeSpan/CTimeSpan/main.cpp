
#include <iostream>
#include "CTimeSpan.h"
using namespace std;
int main()
{
	CTimeSpan a, b, c;
	cin >> a >> b;
	cout << a << endl;
	cout<<b<<endl;
	/*c = a + b;
	cout << c<<endl;*/
	c = a - b;
	cout << c<<endl;
}