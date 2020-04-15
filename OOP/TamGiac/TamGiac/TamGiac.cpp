// TamGiac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TamGiac.h"
#include "Toado.h"
#include<string>
using namespace std;
void TamGiac::Nhap()
{
	string s;
	cout << "ban co muon nhap tam giac hay khong";
	cin >> s;//T,F;
	if (s == "T")
	{
		a.Nhap();
		b.Nhap();
		c.Nhap();
		if (KT() == false)
		{
			cout << "Nhap Lai";
			Nhap();
		}

	}
	else
		TamGiac();
}
bool TamGiac::KT()
{
	double x = a.Distance(b);
	double y = a.Distance(c);
	double z = b.Distance(c);
	if (x < y + z && y < z + x && z < x + y)
		return true;
	return false;
}
TamGiac::~TamGiac()
{
	return;
}
TamGiac::TamGiac()
{ 
	a.setTD(0,0);
	b.setTD(0, 0);
	c.setTD(0, 0);
}
TamGiac::TamGiac(const Toado &x, const Toado &y, const Toado &z)
{
	a = x;
	b = y;
	c = z;
}
void TamGiac::Xuat()
{
	a.Xuat();
	b.Xuat();
	c.Xuat();
}
void TamGiac::TinhTien(int x, int y)
{
	a.TinhTien(x, y);
	b.TinhTien(x, y);
	c.TinhTien(x, y);
}
double TamGiac::Chuvi()
{
	double x = a.Distance(b);
	double y = a.Distance(c);
	double z = b.Distance(c);
	return x + y + z;
}
double TamGiac::DT()
{
	double x = a.Distance(b);
	double y = a.Distance(c);
	double z1 = b.Distance(c);
	double z = Chuvi()/2;
	double result = sqrt(z * (z - x) * (z - y) * (z - z1));
	return result;
}

