#include<iostream>
#include"Career.h"
#pragma once
using namespace std;
class SinhVien:
	public Career
{
private:
	int mssv;
	char SchoolName[40];
public:
	void Nhap();
	void Xuat();
};

