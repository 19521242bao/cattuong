
#include <iostream>
#include "CVector.h"
using namespace std;
int main()
{
	CVector a, b, c;
	cin >> a >> b;
	cout << a << endl;
	cout << b << endl;
	c = a + b;
	cout << c << endl;
	c = a - b;
	cout << c << endl;
	a.TinhTien(b);
	cout << a;
	cout << a.Norm();
}