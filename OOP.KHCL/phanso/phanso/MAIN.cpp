#include<iostream>

#include "phanso.h"
using namespace std;
int main()
{
	phanso a, b, a1, a2, a3, a4;
	a.Nhap();
	b.Nhap();
	a.RutGon();
	b.RutGon();
	a1 = a.CongPS(b);
	a2 = a.ChiaPS(b);
	a3 = a.NhanPS(b);
	a4 = a.TruPS(b);
	a1.RutGon();
	a2.RutGon();
	a3.RutGon();
	a4.RutGon();
	a1.Xuat();
	cout << a1.DinhGT()<<endl;
	a2.Xuat();
	cout << a2.DinhGT()<<endl;
	a3.Xuat();
	cout << a3.DinhGT()<<endl;
	a4.Xuat();
	cout << a4.DinhGT()<<endl;
}