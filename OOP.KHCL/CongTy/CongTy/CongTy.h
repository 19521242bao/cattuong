#pragma once
#include"NvSx.h"
#include"NVQL.h"
#include<iostream>
using namespace std;
class CongTy
{
private:
	int n;//so nhan vien ql;
	int m;//so nhan vien ban hang
	NVQL* a;//mang chua nhan vien ql
	NvSx* b;//mang chua nhan vien ban hang
public:
	CongTy() {};
	~CongTy() {};
	friend istream& operator>>(istream& is, CongTy& CT);
	friend ostream& operator<<(ostream& is, CongTy CT);
	int TinhTienLuong(int k,int x);// voi k la so thang, x la so san pham dinh muc

};
