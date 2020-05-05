#pragma once
#include "ToaDo.h"
#include<vector>
#include<iostream>
using namespace std;
class DaGiac
{
private:
	int n;//so diem
	ToaDo a[100];//toa do cac diem
public:
	DaGiac();
	DaGiac(const DaGiac&);
	void Nhap();
	void Xuat();
	void SetDaGiac(const DaGiac&);
	void TinhTien(int x, int y);
	void Size(float k);
	void Quay(float rad);


};