// ClassDaGiac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DaGiac.h"
#include <iostream>
#include "Toado.h"
#include<string>
using namespace std;
void DaGiac::Nhap()
{
		cout << "Nhap so diem";
		cin >> sodiem;
		p = new Toado[sodiem];
		for (int i = 0; i < sodiem; i++)
			p[i].Nhap();

}
DaGiac::~DaGiac()
{
	return;
}
DaGiac::DaGiac()
{
	sodiem = 4;
	p = new Toado[sodiem];
	
	
}
DaGiac::DaGiac(const DaGiac& a)
{
	sodiem = a.sodiem;
	p = new Toado[sodiem+1];
	for (int i = 0; i < sodiem; i++)
		p[i].setTD(a.p[i]);
}

void DaGiac::Xuat()
{
	for (int i = 0; i < sodiem; i++)
		p[i].Xuat();
}

double DaGiac::Chuvi()
{
	double s = 0;
	for (int i = 0; i < sodiem - 1; i++)
		for (int j = i + 1; j < sodiem; j++)
		{
			s+=p[i].Distance(p[j]);
		}
	return s;
}
double DaGiac::CanhMax()
{
	double max1 = 0,s;

	for (int i = 0; i < sodiem - 1; i++)
		for (int j = i + 1; j < sodiem; j++)
		{
			s= p[i].Distance(p[j]);
			if (max1 < s)
				max1 = s;
		}
	return max1;
}
