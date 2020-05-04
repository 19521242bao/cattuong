// ToaDo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ToaDo.h"
using namespace std;
void ToaDo::Nhap()
{
	cout << "nhap hoanh do ";
	cin >> hdo;
	cout << "nhap tung do";
	cin >> tdo;
}
void ToaDo::Xuat()
{
	cout << hdo << ": " << tdo << endl;
}
ToaDo::ToaDo()
{
	hdo = 0;
	tdo = 0;
}
ToaDo::ToaDo(const ToaDo& a)
{
	hdo = a.hdo;
	tdo = a.tdo;
}
ToaDo::ToaDo(int x, int y)
{
	hdo = x;
	tdo = y;
}
void ToaDo::TinhTien(int x, int y)
{
	hdo += x;
	tdo += y;

}
double ToaDo::Distance(const ToaDo& a)
{
	double result = pow(hdo - a.hdo, 2) + pow(tdo - a.tdo, 2);
	return sqrt(result);
}
void ToaDo::setToaDo(int x, int y)
{
	hdo = x;
	tdo = y;
}
int ToaDo::getHD()
{
	return hdo;
}
int ToaDo::getTD()
{
	return tdo;
}
ToaDo::~ToaDo()
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
