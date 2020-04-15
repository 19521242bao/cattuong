
#include "Toado.h"
#include<iostream>
using namespace std;

void Toado::Nhap()
{
	cout << "nhap hoanh do ";
	cin >> hdo;
	cout << "nhap tung do";
	cin >> tdo;
}
void Toado::Xuat()
{
	cout << hdo << ": " << tdo << endl;
}
Toado::Toado()
{
	hdo = 0;
	tdo = 0;
}

void Toado::TinhTien(int x, int y)
{
	hdo += x;
	tdo = y;

}

Toado::~Toado()
{
	return;
}
int Toado::getHD() {
	return hdo;
}
int Toado::getTD() {
	return tdo;
}
void Toado::setTD(int x,int y)
{
	hdo = x;
	hdo = y;
}
double Toado::Distance(const Toado& a)
{
	double result = pow(hdo - a.hdo, 2) + pow(tdo - a.tdo, 2);
	return sqrt(result);
}
