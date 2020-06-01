#pragma once
#include "NhanVien.h"
class NVVP :
	public NhanVien
{
private:
	int SoNgayLV;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
};
