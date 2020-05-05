#include<iostream>
#include "DaGiac.h"
#include "ToaDo.h"
using namespace std;
int main()
{
	DaGiac a;
	a.Nhap();
	a.Xuat();
	DaGiac b(a);
	b.Xuat();
	a.Quay(3.14);
	a.Xuat();
	a.Size(100);
	a.Xuat();
}