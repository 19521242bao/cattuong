
// DaThuc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DaThuc.h"
#include<functional>
#include<algorithm>
using namespace std;
DaThuc::DaThuc()
{
	n = 2;
	for (int i = 0; i <= 2; i++)
	{
		a[i] = 0;
	}
}
DaThuc::DaThuc(const DaThuc&x)
{
	n = x.n;
	for (int i = 0; i <= n; i++)
		a[i] = x.a[i];
}
void DaThuc::Nhap()
{
	cout << "Nhap bac cua da thuc:";
	cin >> n;
	for (int i = 0; i <= n; i++)
		cin >> a[i];
}
void DaThuc::Xuat()
{
	for (int i = n; i >= 1; i--)
		if(a[i]!=0)
			cout << a[i] << "x^" << i<<"+";
	cout<< a[0] << endl;
}
void DaThuc::SetDaThuc(const DaThuc& x)
{
	n = x.n;
	for (int i = 0; i <= n; i++)
		a[i] = x.a[i];
}
int DaThuc::GetHS(int x)
{
	return a[x];
}
DaThuc DaThuc::CongDaThuc(const DaThuc& x)
{
	DaThuc b;
	b.n = max(x.n, n);
	int min1 = min(x.n, n);
	for (int i = 0; i <= b.n; i++)
	{
		if (i <= min1)
			b.a[i] = a[i] + x.a[i];
		else
		{
			if (x.n > n)
				b.a[i] = x.a[i];
			else
				b.a[i] = a[i];
		}
	}
	return b;
}
DaThuc DaThuc::TruDaThuc(const DaThuc& x)
{
	DaThuc b;
	b.n = max(x.n, n);
	int min1 = min(x.n, n);
	for (int i = 0; i <= b.n; i++)
	{
		if (i <= min1)
			b.a[i] = a[i] - x.a[i];
		else
		{
			if (x.n > n)
				b.a[i] = -x.a[i];
			else
				b.a[i] = a[i];
		}
	}
	return b;
}
DaThuc DaThuc::NhanDaThuc(const DaThuc& x)
{
	DaThuc b;
	b.n = x.n + n;
	for (int i = 0; i <= b.n; i++)
		b.a[i] = 0;
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= x.n; j++)
			b.a[i + j]+= a[i] * x.a[j];
	return b;
}
DaThuc DaThuc::DaoHam()
{
	DaThuc b;
	b.n = n - 1;
	for (int i = 0; i <= b.n; i++)
		b.a[i] = a[i + 1] * (i + 1);
	return b;
}
DaThuc DaThuc::NgHam(int c)
{
	DaThuc b;
	b.n = n +1;
	b.a[0] = c;
	for (int i = 1; i <= b.n; i++)
		b.a[i] = a[i - 1] / (i );
	return b;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
