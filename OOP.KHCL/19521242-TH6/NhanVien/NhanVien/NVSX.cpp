
#include<iostream>
#include<string>
#include"NVSX.h"
using namespace std;
istream& operator >>(istream& is, NVSX &ps)
{
	cout << "nhap ten: ";
	cin.ignore();
	getline(is, ps.hoten);
	cout << "nhap ngay: ";
	is >> ps.date;
	cout << "nhap luong co ban: ";
	is >> ps.luongcanban;
	cout << "nhap so san pham: ";
	is >> ps.sosp;
	return is;
}
int NVSX::luong() {
	return luongcanban+sosp*5000;
}
ostream& operator<<(ostream& os, NVSX ps)
{
	os << "ten nhan vien: " << ps.hoten<<endl;
	os << "ngay sinh: " << ps.date << endl;
	os << "muc luong nhan duoc la: " << ps.luong()<<endl;
	return os;
}