
#include "HocSinh.h"
#include<iostream>
using namespace std;
void HocSinh::Nhap()
{
	Career::Nhap();
	cout << "nhap ten truong: ";
	cin >> SchoolName;
}
void HocSinh::Xuat()
{
	Career::Xuat();
	cout << SchoolName << endl;

}