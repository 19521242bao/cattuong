#include <iostream>
#include "soPhuc.h"
using namespace std;
void soPhuc::Nhap()
{
	cout << "Nhap so phuc: \n";
	cout << "Nhap phan thuc: ";
	cin >> thuc;
	cout << "Nhap phan ao: ";
	cin >> ao;
}
void soPhuc::Xuat()
{
	cout << "so phuc la " << thuc <<"+"<<ao<<"*i"<<endl;
	
}
float soPhuc::DinhGT()
{
	return (sqrt(thuc * thuc + ao * ao));
}
soPhuc soPhuc::CongSP(soPhuc a)
{
	soPhuc b;
	b.thuc = a.thuc + thuc;
	b.ao = a.ao + ao;
	return b;
}
soPhuc soPhuc::TruSP(soPhuc a)
{
	soPhuc b;
	b.thuc = a.thuc - thuc;
	b.ao = a.ao - ao;
	return b;
}
soPhuc soPhuc::NhanSP(soPhuc a)
{
	soPhuc b;
	b.thuc = a.thuc * thuc-a.ao*ao;
	b.ao = thuc * a.ao + ao * a.thuc;
	return b;
}
soPhuc soPhuc::ChiaSP(soPhuc a)
{
	soPhuc b;
	b.thuc = (a.thuc * thuc + a.ao * ao)/(a.thuc*a.thuc+a.ao*a.ao);
	b.ao = (-thuc * a.ao + ao * a.thuc)/ (a.thuc * a.thuc + a.ao * a.ao);
	return b;
}



