// ClassToaDo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ClassToaDo.h"
using namespace std;
void ClassToaDo::Nhap()
{
	cout << "nhap hoanh do ";
	cin >> hdo;
	cout << "nhap tung do";
	cin >> tdo;
}
void ClassToaDo::Xuat()
{
	cout << hdo << ": " << tdo << endl;
}
ClassToaDo::ClassToaDo()
{
	hdo = 0;
	tdo = 0;
}
ClassToaDo::ClassToaDo(const ClassToaDo &a)
{
	hdo = a.hdo;
	tdo = a.tdo;
}
void ClassToaDo:: TinhTien(int x,int y)
{
	this->hdo += x;
	this->tdo = y;
	
}
double ClassToaDo::Distance(const ClassToaDo& a)
{
	double result = pow(hdo - a.hdo, 2) + pow(tdo - a.tdo, 2);
	return sqrt(result);
}
ClassToaDo::~ClassToaDo()
{
	return;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
