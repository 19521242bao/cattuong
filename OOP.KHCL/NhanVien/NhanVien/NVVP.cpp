#include <iostream>
#include"NVVP.h"
using namespace std;
void NVVP::Nhap()
{
	NhanVien::Nhap();
	cout << "So ngay lam viec: ";
	cin >> SoNgayLV;
}
void NVVP::Xuat()
{
	NhanVien::Xuat();
	cout << "So ngay lam viec: " << SoNgayLV;
}
double NVVP::TinhLuong()
{
	Luong = SoNgayLV * 100;
	return Luong;
}