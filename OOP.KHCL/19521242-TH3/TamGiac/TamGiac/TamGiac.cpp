// TamGiac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TamGiac.h"
#include "ToaDo.h"
void TamGiac::Nhap() {
	a.Nhap();
	b.Nhap();
	c.Nhap();
}
void TamGiac::Xuat() {
	a.Xuat();
	b.Xuat();
	c.Xuat();
}
TamGiac::TamGiac()
{
	a.setToaDo(0, 0);
	b.setToaDo(0, 0);
	c.setToaDo(0, 0);
}
TamGiac::TamGiac(const TamGiac& x)
{
	a = x.a;
	b = x.b;
	c = x.c;
}
void TamGiac::SetTamGiac(const TamGiac&x)
{
	a = x.a;
	b = x.b;
	c = x.c;
}
void TamGiac::SetTamGiac(const ToaDo&x, const ToaDo&y, const ToaDo&z)
{
	a = x;
	b = y;
	c = z;
}
void TamGiac::TinhTien(int x, int y)
{
	a.TinhTien(x, y);
	b.TinhTien(x, y);
	c.TinhTien(x, y);
}
void TamGiac::Size(float k)
{
	a.Size(k);
	b.Size(k);
	c.Size(k);
}
void TamGiac::Quay(float rad) {
	a.Quay(rad);
	b.Quay(rad);
	c.Quay(rad);
}