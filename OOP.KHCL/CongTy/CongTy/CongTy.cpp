#pragma once
#include"NVSX.h"
#include"NVQL.h"
#include<iostream>
#include"CongTy.h"
using namespace std;
istream& operator>>(istream& is, CongTy& CT)
{
	cout << "Nhap so NVQL: ";
	is >> CT.n;
	cout << "Nhap so NVSX: ";
	is >> CT.m;
	CT.a = new NVQL[CT.n];
	CT.b = new NvSx[CT.m];
	int len = CT.m + CT.n;
	int y = 0, z = 0;
	for (int i = 0; i < CT.n; i++)
	{
		is >> CT.a[i];
	}
	for (int i = 0; i < CT.m; i++)
	{
		is >> CT.b[i];
	}
	return is;
}
ostream& operator<<(ostream& os, CongTy CT)
{
	int len1 = CT.n;
	int len2 = CT.m;
	for (int i = 0; i < CT.n; i++)
	{
		os << CT.a[i] << endl;
	}
	for (int i = 0; i < CT.m; i++)
	{
		os << CT.b[i]<<endl;
	}
	return os;
}
int CongTy::TinhTienLuong(int k,int x)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		s += a[i].TinhTienLuong();
	for (int i = 0; i < n; i++)
		s += b[i].TinhTienLuong(x);
	return s * k;
}