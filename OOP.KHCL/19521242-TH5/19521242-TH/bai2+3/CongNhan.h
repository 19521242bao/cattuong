#pragma once
#include"Career.h"
class CongNhan:
	public Career
{
private:
	char nghe[40];
	int exp;
public:
	void Nhap();
	void Xuat();
};

