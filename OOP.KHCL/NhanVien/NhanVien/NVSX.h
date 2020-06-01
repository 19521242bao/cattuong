#pragma once
#include "NhanVien.h"
class NVSX :
	public NhanVien
{
private:
	int SoSp;
	double LuongCB;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
};