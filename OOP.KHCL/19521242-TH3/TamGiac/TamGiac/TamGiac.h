#pragma once
#include "ToaDo.h"
class TamGiac
{
private:
	ToaDo a, b, c;
public:
	TamGiac();
	TamGiac(const TamGiac&);
	void Nhap();
	void Xuat();
	void SetTamGiac(const TamGiac&);
	void SetTamGiac(const ToaDo&, const ToaDo&, const ToaDo&);
	void TinhTien(int x, int y);
	void Size(float k);
	void Quay(float rad);


};

