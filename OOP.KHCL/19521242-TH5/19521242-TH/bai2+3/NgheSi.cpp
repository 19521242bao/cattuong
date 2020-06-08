
#include "NgheSi.h"
#include"Career.h"
#include<iostream>
using namespace std;
void NgheSi::Nhap()
{
	Career::Nhap();
	cout << "nhap so nam kinh nghiem: ";
	cin >> exp;
	cout << "nhap ten tac pham: ";
	cin >> tacpham;
}
void NgheSi::Xuat()
{
	Career::Xuat();
	cout << "kinh nghiem: " << exp << endl;
	cout << "tac pham: " << tacpham << endl;
}