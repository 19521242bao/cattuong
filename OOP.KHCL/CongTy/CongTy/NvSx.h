#include<string>
#include<iostream>
using namespace std;
#pragma once
class NvSx
{
private:
	string hoten;
	string date;
	string gioitinh;
	int luongcoban;
	int ssp;
public:
	NvSx() {};
	~NvSx() {};
	// construtor va detructor
	friend istream& operator>>(istream& is, NvSx& CT);
	friend ostream& operator<<(ostream& os, NvSx CT);
	//ham nhap va xuat
	int TinhTienLuong(int k);// k la so san pham dinh muc
};

