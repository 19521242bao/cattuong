// sophuc1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "sophuc.h"
using namespace std;
sophuc::sophuc()
{
	thuc = 1;
	ao = 0;
}
// khoi tao so phuc
istream& operator >> (istream& is, sophuc& ps)
{
	cout << " nhap phan thuc";
	is >> ps.thuc;
	cout << "nhap phan ao";
	is >> ps.ao;
	return is;
}// phuong thuc nhap
ostream& operator << (ostream& os, sophuc ps)
{
	os << ps.thuc << "+" << ps.ao << "i";
	return os;
 }//phuong thuc xuat
sophuc sophuc::operator+(sophuc a)
{
	sophuc b;
	b.thuc = a.thuc + thuc;
	b.ao = a.ao + ao;
	return b;
}//cong so phuc
sophuc sophuc::operator-(sophuc a)
{
	sophuc b;
	b.thuc = a.thuc - thuc;
	b.ao = a.ao - ao;
	return b;
}//cong so ao
sophuc sophuc::operator*(sophuc a)
{
	sophuc b;
	b.thuc = a.thuc * thuc - a.ao * ao;
	b.ao = thuc * a.ao + ao * a.thuc;
	return b;
}// nhan 2 so ao a1*a2-b1*b2+i*(a1*b2+a2*b1)
sophuc sophuc::operator/(sophuc a)
{
	sophuc b;
	b.thuc = (a.thuc * thuc + a.ao * ao) / (a.thuc * a.thuc + a.ao * a.ao);
	b.ao = (-thuc * a.ao + ao * a.thuc) / (a.thuc * a.thuc + a.ao * a.ao);
	return b;
}
bool sophuc::operator==(sophuc a)
{
	if (thuc == a.thuc && ao == a.ao)
		return true;
	return false;
}//so sanh bang
bool sophuc::operator!=(sophuc a)
{
	if (a.thuc != thuc || a.ao != ao)
		return true;
	return false;
}// kiem tra khac nhau
