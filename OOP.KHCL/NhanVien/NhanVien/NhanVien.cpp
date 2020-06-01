#include<iostream>
#include"NhanVien.h"
using namespace std;
void NhanVien::Nhap()
{
	cout << "Nhap ho va ten: ";
	cin.ignore();
	gets_s(HoTen);
	cout << "Nhap ngay sinh: ";
	gets_s(NgaySinh);
}
void NhanVien::Xuat()
{
	cout << "Ho ten: " << HoTen << endl;
	cout << "Ngay sinh: " << NgaySinh << endl;
	cout << "Luong: " << Luong  << endl;
}

