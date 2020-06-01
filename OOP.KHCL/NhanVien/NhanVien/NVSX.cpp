#include <iostream>
#include "NVSX.h"
using namespace std;
void NVSX::Nhap()
{
	NhanVien::Nhap();
	cout << "So san pham: ";
	cin >> SoSp;
	cout << "Luong can ban: ";
	cin >> LuongCB;
}
void NVSX::Xuat()
{
	NhanVien::Xuat();
	cout << "So san pham: " << SoSp << endl;
	cout << "Luong can ban: " << LuongCB << endl;
}
double NVSX::TinhLuong()
{
	Luong = LuongCB + SoSp * 5000;
	return Luong;
}