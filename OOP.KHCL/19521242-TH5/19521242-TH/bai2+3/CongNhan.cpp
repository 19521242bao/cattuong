#include<iostream>
#include "CongNhan.h"
#include"Career.h"
using namespace std;
void CongNhan::Nhap()
{
	Career::Nhap();
	cout << "nhap nghe: ";
	cin >> nghe;
	cout << "nhap so nam lam viec: ";
	cin >> exp;
}
void CongNhan::Xuat()
{
	Career::Xuat();
	cout << "ten nghe: " << nghe << endl;
	cout << "kinh nghiem: " << exp << " nam" << endl;
}

