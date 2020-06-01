
// NhanVien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NhanVien.h"
#include "NVSX.h"
#include"NVVP.h"
istream& operator>>(istream& is, NhanVien& ps)
{
	cout << "nhap so nhan vien san xuat: ";
	is >> ps.n;
	cout << "nhap so nhan vien van phong: ";
	is >> ps.m;
	for (int i = 0; i < ps.n; i++)
		is >> ps.a[i];
	for (int i = 0; i < ps.m; i++)
		is >> ps.b[i];
	return is;
}
ostream& operator<<(ostream& os, NhanVien ps)
{
	os << "Tong so nhan vien la: " << ps.m + ps.n;
	for (int i = 0; i < ps.n; i++)
		os << ps.a[i];
	for (int i = 0; i < ps.m; i++)
		os << ps.b[i];
	return os;
}
