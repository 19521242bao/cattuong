#include<iostream>
#include<string>
#include "NVVP.h"
using namespace std;
istream& operator >>(istream& is, NVVP& ps)
{
	cout << "nhap ten: ";
	cin.ignore();
	getline(is, ps.hoten);
	cout << "nhap ngay: ";
	is >> ps.date;
	cout << "nhap so ngay lam viec: ";
	is >> ps.ngaylamviec;
	return is;
}
int NVVP::luong() {
	return ngaylamviec * 100000;
}
ostream& operator<<(ostream& os, NVVP ps)
{
	os << "ten nhan vien: " << ps.hoten << endl;
	os << "ngay sinh: " << ps.date << endl;
	os << "muc luong nhan duoc la: " << ps.luong()<<endl;
	return os;
}