#include"NVSX.h"
#include"NVQL.h"
#include<iostream>
#include"CongTy.h"
using namespace std;
int main()
{
	CongTy a;
	cin >> a;
	cout << a;
	int k, x;
	k = 1;
	x = 200;
	int cost=a.TinhTienLuong(k, x);
	cout << cost;
}