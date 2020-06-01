
#include <iostream>
#include "phanso.h"
using namespace std;
int main()
{
	phanso a,b,c(3),d;
	cin >> a >> b;
	d = a + b;
	cout << d<<endl;
	d = a - b;
	cout << d<<endl;
	d = a * b;
	cout << d<<endl;
	d = a / c;
	cout << d<<endl;
	if (a == b)
		cout << "bang nhau";
	if(a!=b)
		cout<<"khac nhau";
}