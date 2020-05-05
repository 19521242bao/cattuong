#include<iostream>
#include "CString.h"
using namespace std;
int main()
{
	CString a,b,c;
	cin >> a>>b;
	c = a + b;
	cout << c;
	if (a >= b)
		cout << "true";
	else
		cout << "false";

	
}