#include<iostream>
#include "ToaDo.h"
using namespace std;
int main()
{
	ToaDo a,c(4,3), b(c);
	a.Nhap();
	a.Xuat();
	b.Xuat();
	c.Xuat();
	cout<<b.getHD()<<endl;
	cout<<a.getHD()<<endl;
	cout<<a.getTD()<<endl;
	b.setToaDo(7, 8);
	b.Xuat();
	a.TinhTien(1, 2);
	a.Xuat();
}