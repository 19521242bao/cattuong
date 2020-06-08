#pragma once
#include <iostream>
#include <string>
using namespace std;
class NhanVien
{
protected:
	char HoTen[40];
	char NgaySinh[20];
	double Luong;
public:
	void Nhap();
	void Xuat();
};