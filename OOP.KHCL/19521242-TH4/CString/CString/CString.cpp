// CString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CString.h"
using namespace std;
CString::CString()
{
}
CString::~CString()
{
}
istream& operator>>(istream& is, CString& ps)
{
	cout << "nhap chuoi: ";
	getline(is, ps.s);
	return is;
}
 ostream& operator<<(ostream& os, CString& ps)
{
	 os << "chuoi la:" << ps.s;
	 return os;
 }
 CString CString::operator+(CString a)
 {
	 CString b;
	 b.s = s +" "+ a.s;
	 return b;
 }
 void CString::operator=(CString a)
 {
	 s = a.s;
}
 bool CString::operator==(CString a)
 {
	 if (s == a.s)
		 return true;
	 return false;
 }
 bool CString::operator!=(CString a)
 {
	 if (s != a.s)
		 return true;
	 return false;
 }
 bool CString::operator>(CString a)
 {
	 if (s > a.s)
		 return true;
	 return false;
 }
 bool CString::operator>=(CString a)
 {
	 if (s >= a.s)
		 return true;
	 return false;
 }
 bool CString::operator<=(CString a)
 {
	 if (s <= a.s)
		 return true;
	 return false;
 }
 bool CString::operator<(CString a)
 {
	 if (s < a.s)
		 return true;
	 return false;
 }