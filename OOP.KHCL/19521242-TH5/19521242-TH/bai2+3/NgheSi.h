#pragma once
#include<iostream>
#include"Career.h"
using namespace std;
class NgheSi:
	public Career
{
private:
	int exp;
	char tacpham[50];
public:
	void Nhap();
	void Xuat();
};

