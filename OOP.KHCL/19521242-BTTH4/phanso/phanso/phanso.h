#pragma once

#pragma once
#include<iostream>
using namespace std;
class phanso
{
private:
	int tuso;
	int mauso;
public:
	phanso(int );
	friend istream& operator >>(istream& is, phanso& ps);
	friend ostream& operator <<(ostream& os, phanso ps);
	phanso operator +(phanso a);
	phanso operator -(phanso a);
	phanso operator *(phanso a);
	phanso operator /(phanso a);
	bool operator ==(phanso a);
	bool operator !=(phanso a);
	phanso()= default;
};

