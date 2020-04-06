#include<iostream>
#include "soPhuc.h"
using namespace std;
int main()
{
	soPhuc a, b, a1;
	a.Nhap();
	b.Nhap();
	a.Xuat();
	b.Xuat();
	a1 = a.CongSP(b);
	a1.Xuat();
	cout << a1.DinhGT() << endl;
	a1 = a.TruSP(b);
	a1.Xuat();
	cout << a1.DinhGT() << endl;
	a1 = a.NhanSP(b);
	a1.Xuat();
	cout << a1.DinhGT() << endl;
	a1 = a.NhanSP(b);
	a1.Xuat();
	cout << a1.DinhGT() << endl;

}