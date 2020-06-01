#include<iostream>
#include"NVSX.h"
#include"NVVP.h"
using namespace std;
#pragma once
class NhanVien
{
private:
	int n, m;
	NVSX a[100];
	NVVP b[100];
public:
	friend istream& operator>>(istream& is, NhanVien& ps);
	friend ostream& operator<<(ostream& os, NhanVien ps);
};

