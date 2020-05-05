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
void ToaDo::Quay(float rad)
{
	hdo = hdo * cos(rad) + tdo * sin(rad);
	tdo = hdo * sin(rad) + tdo * cos(rad);
}
void ToaDo::Size(float k)
{
	hdo *= k;
	tdo *= k;
}
ToaDo::~ToaDo()
{
	return;
}