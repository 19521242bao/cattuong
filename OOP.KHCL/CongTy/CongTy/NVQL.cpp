#include<iostream>
#include "NVQL.h"
#include<string>
using namespace std;
istream& operator>>(istream& is,NVQL &CT)
{
	cout << "Nhap ho ten: ";
	fflush(stdin);
	is >> CT.hoten;
	fflush(stdin);
	cout << "Nhap ngay sinh: ";
	is >> CT.date;
	fflush(stdin);
	cout << "Nhap gioi tinh: ";
	fflush(stdin);
	is >> CT.gioitinh;
	fflush(stdin);
	cout << "Nhap luong co ban: ";
	is >> CT.luongcoban;
	return is;
}
ostream& operator<<(ostream& os,NVQL CT)
{
	os << "Ho ten: " << CT.hoten << endl;
	os << "Gioi Tinh: " << CT.gioitinh << endl;
	os << "Ngay Sinh: " << CT.date << endl;
	return os;
}
int NVQL::TinhTienLuong()
{
	return luongcoban + 500000;
}