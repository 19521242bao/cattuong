#include<iostream>
#include<string>
using namespace std;
#pragma once
class NVSX:public NhanVien
{
private:
	string hoten;
	string date;
	int luongcanban;
	int sosp;
public:
	friend istream& operator >>(istream& is, NVSX &ps);
	friend ostream& operator<<(ostream& os, NVSX ps);
	int luong();
	
};

