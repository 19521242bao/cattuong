#include<string>
#include<iostream>
using namespace std;
#pragma once
class NVQL
{
private:
	string hoten;
	string date;
	string gioitinh;
	int luongcoban;
public:
	NVQL() {};
	~NVQL() {};
	// construtor va detructor
	friend istream& operator>>(istream& is, NVQL& CT);
	friend ostream& operator<<(ostream& os, NVQL CT);
	//ham nhap va xuat
	int TinhTienLuong();// luong bang luongcoban+500k, la tien luong 1 thang
};

