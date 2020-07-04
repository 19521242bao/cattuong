#pragma once
#include "DaGiac.h"
class TamGiac :
	public DaGiac
{
	 
private:
	const int n = 3;
	int AB, BC, CA;
public:
	void Nhap();
	void Xuat();
	void setTamGiac();

};

