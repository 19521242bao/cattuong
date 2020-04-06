
#include<string>
#pragma once
using namespace std;

class Candidate
{
private:
	int mssv;
	string hoten;
	string date;
	float dToan;
	float dVan;
	float dAnh;
public:
	void Nhap();
	void Xuat();
	float ToanVanAnh();
};
