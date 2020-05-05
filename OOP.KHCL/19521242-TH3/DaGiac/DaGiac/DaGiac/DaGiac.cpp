// DaGiac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DaGiac.h"
#include "ToaDo.h"
using namespace std;

void DaGiac::Nhap() {
	cout << "Nhap so luong diem cu da giac:";
	//n>=4;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		a[i].Nhap();
	}
}
void DaGiac::Xuat() {
	for (int i = 0; i < n; i++)
		a[i].Xuat();
}
DaGiac::DaGiac()
{
	int n = 4;// mặc định số điểm là 4
	for (int i = 0; i < n; i++)
		a[i].setToaDo(0, 0);
}
DaGiac::DaGiac(const DaGiac& x)
{
	n = x.n;
	for (int i = 0; i < n; i++)
		a[i] = x.a[i];
}

void DaGiac::SetDaGiac(const DaGiac& x)
{
	n = x.n;
	n = x.n;
	for (int i = 0; i < n; i++)
		a[i] = x.a[i];
}
void DaGiac::TinhTien(int x, int y)
{
	for (int i = 0; i < n; i++)
		a[i].TinhTien(x, y);
}
void DaGiac::Size(float k)
{
	for (int i = 0; i < n; i++)
		a[i].Size(k);
}
void DaGiac::Quay(float rad) {
	for (int i = 0; i < n; i++)
		a[i].Quay(rad);
}