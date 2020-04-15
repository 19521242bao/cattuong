#pragma once
#include "Toado.h"
class TamGiac
{
private:
	Toado a, b, c;
public:
	TamGiac();
	TamGiac(const Toado& , const Toado&, const Toado&);
	~TamGiac();
	void Nhap();
	void Xuat();
	void TinhTien(int, int);
	double Chuvi();
	double DT();
	bool KT();

};

