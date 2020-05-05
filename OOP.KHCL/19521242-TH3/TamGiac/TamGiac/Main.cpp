#include<iostream>
#include "TamGiac.h"
#include "ToaDo.h"
using namespace std;
int main()
{
	TamGiac a;
	a.Nhap();
	a.Xuat();
	a.TinhTien(1, 2);
	a.Xuat();
	a.Quay(30);
	a.Xuat();
	a.Size(100);
	a.Xuat();

}