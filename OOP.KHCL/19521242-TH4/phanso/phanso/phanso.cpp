
// phanso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "phanso.h"
using namespace std;
istream& operator >>(istream& is, phanso& ps)
{
	cout << "nhap tu so";
	is>> ps.tuso;
	cout << "nhap mau so";
	is>> ps.mauso;
	return is;
 }
ostream& operator <<(ostream& os, phanso ps)
{
	os << ps.tuso << "/" << ps.mauso;
	return os;
 }
phanso::phanso(int a)// note phai co gia tri mac dinh ko se bi loi
{
	tuso = a;
	mauso = 1;
}
phanso phanso::operator+(phanso a)
{
	phanso b;
	b.tuso = this->tuso * a.mauso + a.tuso * mauso;
	b.mauso = this->mauso * a.mauso;
	return b;
}
phanso phanso::operator-(phanso a)
{
	phanso b;
	b.tuso = this->tuso * a.mauso - a.tuso * mauso;
	b.mauso = this->mauso * a.mauso;
	return b;
}
phanso phanso::operator*(phanso a)
{
	phanso b;
	b.tuso = this->tuso * a.tuso ;
	b.mauso = this->mauso * a.mauso;
	return b;
}
phanso phanso::operator/(phanso a)
{
	phanso b;
	b.tuso = this->tuso * a.mauso;
	b.mauso = this->mauso * a.tuso;
	return b;
}
bool phanso::operator==(phanso a)
{
	if (tuso * a.mauso - a.tuso * mauso == 0)
		return true;
	return false;
}
bool phanso::operator!=(phanso a)
{
	if (tuso * a.mauso - a.tuso * mauso != 0)
		return true;
	return false;
}


