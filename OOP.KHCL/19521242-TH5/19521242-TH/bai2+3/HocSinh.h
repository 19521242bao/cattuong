#include<iostream>
#include"Career.h"
using namespace std;
#pragma once
class HocSinh :
	public Career
{
private:
	char SchoolName[50];
public:
	void Nhap();
	void Xuat();
};

