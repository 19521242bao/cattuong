
// ClasVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ClassVecTor.h"
using namespace std;
void ClassVecTor::Nhap(int n)
{
	sochieu = n;
	arr = new int [sochieu];
	for (int i = 0; i < sochieu; i++)
	{
		cin >> arr[i];
	}
}
void ClassVecTor::Xuat()
{
	for (int i = 0; i < sochieu; i++)
		cout << arr[i] << ": ";
	cout << endl;
}
ClassVecTor::ClassVecTor()
{
	sochieu = 2;
	arr = new int[2];
	for (int i = 0; i < sochieu; i++)
	{
		arr[i] = 0;
	}
}
ClassVecTor::~ClassVecTor()
{
	return;
}
ClassVecTor ClassVecTor::Cong(const ClassVecTor& a)
{
	ClassVecTor b;
	b.sochieu = sochieu;
	b.arr= new int[sochieu];
	for (int i = 0; i < sochieu; i++)
		b.arr[i] = a.arr[i] + arr[i];
	return b;
}
ClassVecTor ClassVecTor::Tru(const ClassVecTor& a)
{
	ClassVecTor b;
	b.sochieu = sochieu;
	b.arr = new int[sochieu];
	for (int i = 0; i < sochieu; i++)
		b.arr[i] = a.arr[i] - arr[i];
	return b;
}
void ClassVecTor::TinhTien(const ClassVecTor& a)
{
	for (int i = 0; i < sochieu; i++)
		arr[i] += a.arr[i];

}
double ClassVecTor::Norm()
{
	double s = 0;
	for (int i = 0; i < sochieu; i++)
		s += pow(arr[i], 2);
	s = 1.00 * sqrt(s);
	return s;
}
