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
		os << vt.arr[i] << " ";
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
	double s = 0;
	for (int i = 0; i < n; i++)
		s += arr[i];
	s = sqrt(s);
	return s;
}
