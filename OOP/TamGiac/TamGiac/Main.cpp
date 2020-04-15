#include<iostream>
#include<string>
#include<algorithm>
#include<functional>
#include "TamGiac.h"
#include "Toado.h"
using namespace std;
int main()
{
	TamGiac a1, a2;
	a1.Nhap();
	a1.Xuat();
	int x = 2, y = 3;
	/*a1.TinhTien(x, y);
	a1.Xuat();*/
	cout << a1.KT();
	cout<<a1.Chuvi()<<endl;
	cout<<a1.DT();
}