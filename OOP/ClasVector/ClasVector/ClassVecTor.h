#pragma once
#include<vector>
#include "ClassVecTor.h"
using namespace std;
class ClassVecTor
{
private:
	int sochieu;
	int *arr;
public:
	void Nhap(int n);
	void Xuat();
	ClassVecTor();
	~ClassVecTor();
	void TinhTien(const ClassVecTor&);
	ClassVecTor Cong(const ClassVecTor&);
	ClassVecTor Tru(const ClassVecTor&);
	double Norm();
};

