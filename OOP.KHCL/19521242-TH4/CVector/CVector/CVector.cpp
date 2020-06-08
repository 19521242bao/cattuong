
// CVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CVector.h"
using namespace std;
CVector::CVector()
{

}
CVector::~CVector()
{

}
istream& operator >>(istream& is, CVector& vt)
{
	cout << "nhap so chieu :";
	is >> vt.n;
	vt.arr = new double[vt.n];
	for (int i = 0; i < vt.n; i++)
	{
		cout << "nhap diem thu" << i + 1 << endl;
		is >> vt.arr[i];
	}
	return is;
}
ostream& operator <<(ostream& os, CVector vt)
{
	for (int i = 0; i < vt.n; i++)
		os << vt.arr[i]<<" ";
	return os;
}
int CVector::getDim()
{
	return n;
}
bool CVector::Check(CVector a)
{
	if (getDim() == a.getDim())
		return true;
	return false;
}
CVector CVector::operator+(CVector a)
{
	CVector b;
	b.n = n;
	b.arr = new double[b.n];
	for (int i = 0; i < b.n; i++)
		b.arr[i] = arr[i] + a.arr[i];
	return b;
}
CVector CVector::operator-(CVector a)
{
	CVector b;
	b.n = n;
	b.arr = new double[b.n];
	for (int i = 0; i < b.n; i++)
		b.arr[i] = arr[i] - a.arr[i];
	return b;
}
void CVector::TinhTien(CVector a)
{
	for (int i = 0; i < n; i++)
		arr[i] += a.arr[i];
	
}
double CVector::Norm()
{
	double s=0;
	for (int i = 0; i < n; i++)
		s += arr[i];
	s = sqrt(s);
	return s;
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
