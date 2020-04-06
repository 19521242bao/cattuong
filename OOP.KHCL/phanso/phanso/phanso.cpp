
#include "phanso.h"
#include<iostream>
using namespace std;

void phanso::Nhap()
{
	cout << "Nhap Phan So: ";
	cout << "Nhap Tu So: ";
	cin >> tuso;
	cout << "Nhap Mau So: ";
	cin >> mauso;
}
void phanso::Xuat()
{
	cout << "Phan so co dang la " << tuso << "/" << mauso;
	cout << endl;
}
int UCLN(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
void phanso::RutGon()
{
	int a = UCLN(tuso, mauso);
	tuso /= a;
	mauso /= a;
}
phanso phanso::CongPS(phanso a)
{
	phanso b;
	b.tuso = this->tuso * a.mauso + a.tuso * mauso;
	b.mauso = this->mauso * a.mauso;
	return b;
}
phanso phanso::TruPS(phanso a)
{
	phanso b;
	b.tuso = this->tuso * a.mauso - a.tuso * mauso;
	b.mauso = this->mauso * a.mauso;
	return b;
}
phanso phanso::NhanPS(phanso a)
{
	phanso b;
	b.tuso = this->tuso * a.tuso;
	b.mauso = this->mauso * a.mauso;
	return b;
}
phanso phanso::ChiaPS(phanso a)
{
	phanso b;
	b.tuso = this->tuso * a.mauso;
	b.mauso = this->mauso * a.tuso;
	return b;
}
float phanso::DinhGT()
{
	float a = (float)tuso / mauso;
	return a;
}
