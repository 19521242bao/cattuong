// Maxtrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Maxtrix.h"
#include<functional>
#include<algorithm>
Maxtrix::Maxtrix()
{
	m = 0;
	n = 0;
	arr = NULL;
}

//Maxtrix::~Maxtrix()
//{
//	if (arr == NULL)
//		return;
//	for (int i = 0; i < m; i++)
//	{
//		delete[] arr[i];
//		arr[i] = NULL;
//	}
//	delete[] arr;
//	arr = NULL;
//}
istream& operator >>(istream& is, Maxtrix& mt)
{
	cout << "nhap so dong: ";
	is >> mt.m;
	cout << "nhap so cot: ";
	is >> mt.n;
	mt.arr = new double* [mt.m];
	for (int i = 0; i < mt.m; i++)
			mt.arr[i] = new double[mt.n];
	for (int i = 0; i < mt.m; i++)
		for (int j = 0; j < mt.n; j++)
			is>> mt.arr[i][j];
	return is;
}
ostream& operator <<(ostream& os, Maxtrix mt)
{
	for (int i = 0; i < mt.m; i++)
	{
		for (int j = 0; j < mt.n; j++)
			os << mt.arr[i][j] << " ";
		os << endl;
	}
	os << endl;
	return os;
	
}
Maxtrix Maxtrix::operator+(Maxtrix a)// cộng 2 ma trận cung dạng
{
	Maxtrix b;
	b.m = m;
	b.n = n;
	b.arr = new double* [b.m];
	for (int i = 0; i < b.m; i++)
		b.arr[i] = new double[b.n];
	for (int i = 0; i < b.m; i++)
		for (int j = 0; j < b.n; j++)
			b.arr[i][j] = arr[i][j] + a.arr[i][j];
	return b;	
}
Maxtrix Maxtrix::operator-(Maxtrix a)// cộng 2 ma trận cung dạng
{
	Maxtrix b;
	b.m = m;
	b.n = n;
	b.arr = new double* [b.m];
	for (int i = 0; i < b.m; i++)
		b.arr[i] = new double[b.n];
	for (int i = 0; i < b.m; i++)
		for (int j = 0; j < b.n; j++)
			b.arr[i][j] = arr[i][j] - a.arr[i][j];
	return b;
}
Maxtrix Maxtrix::operator *(int  a)
{
	Maxtrix b;
	b.m = m;
	b.n = n;
	b.arr = new double* [b.m];
	for (int i = 0; i < b.m; i++)
		b.arr[i] = new double[b.n];
	for (int i = 0; i < b.m; i++)
		for (int j = 0; j < b.n; j++)
			b.arr[i][j] = arr[i][j]*a;
	return b;
}
Maxtrix Maxtrix::operator*(Maxtrix a)//ma trận this có số hàng bằng số cột của a
{
	Maxtrix b;
	b.m = m;
	b.n = max(a.m,m);
	b.arr = new double* [m]; // tạo vùng nhớ chứa ma trận mới
	for (int i = 0; i < m; i++)
		b.arr[i] = new double[a.n];

	for (int i = 0; i < m; i++) // nhân
	{
		for (int j = 0; j < b.n; j++)
		{
			b.arr[i][j] = 0;
			for (int k = 0; k < n; k++)
				b.arr[i][j] +=  + arr[i][k] * a.arr[k][j];
		}
	}
	return b;
}

