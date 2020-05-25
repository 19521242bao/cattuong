#include<iostream>
#include "DaThuc.h"
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
	DaThuc a, b,c;
	a.Nhap();
	/*b.Nhap();*/
	a.Xuat();
	/*b.Xuat();*/
	c = a.NgHam(4);
	c.Xuat();

}