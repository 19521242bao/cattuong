#include<iostream>
#include "DaGiac.h"
#include <iostream>
#include "Toado.h"
#include<string>
using namespace std;
int main()
{
	DaGiac a;
	a.Nhap();
	a.Xuat();
	cout << a.Chuvi()<<endl;
	cout << a.CanhMax();

}