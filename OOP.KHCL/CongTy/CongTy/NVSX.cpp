#include<algorithm>
#include<functional>
#include "NvSx.h"
istream& operator>>(istream& is, NvSx& CT)
{
	cout << "Nhap ho ten: ";
	cin >> CT.hoten;
	fflush(stdin);
	cout << "Nhap ngay sinh: ";
	is >> CT.date;
	fflush(stdin);
	cout << "Nhap gioi tinh: ";
	is >> CT.gioitinh;
	fflush(stdin);
	cout << "Nhap luong co ban: ";
	is >> CT.luongcoban;
	fflush(stdin);
	cout << "Nhap so san pham: ";
	is >> CT.ssp;
	return is;
}
ostream& operator<<(ostream& os, NvSx CT)
{
	os << "Ho ten: " << CT.hoten << endl;
	os << "Gioi Tinh: " << CT.gioitinh << endl;
	os << "Ngay Sinh: " << CT.date << endl;
	return os;
}
int NvSx::TinhTienLuong(int k)
{
	return luongcoban + max(0, ssp - k) * 30000;
}