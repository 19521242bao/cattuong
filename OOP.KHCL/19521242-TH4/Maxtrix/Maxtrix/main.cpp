#include<iostream>
#include"CVector.h"
#include"Maxtrix.h"
using namespace std;
CVector operator*(const Maxtrix& a, const CVector& b)
{
	CVector c;
	c.n = a.n;
	c.arr = new double[a.n];
	for (int i = 0; i < c.n; i++)
	{
		c.arr[i] = 0;
		for (int j = 0; j < a.m; j++)
			c.arr[i] += a.arr[i][j] * b.arr[i];
	}
	return c;
		
}
int main()
{
	Maxtrix a, b,c;
	cin >> a >> b;
	c = a *b;
	cout << c;
}
