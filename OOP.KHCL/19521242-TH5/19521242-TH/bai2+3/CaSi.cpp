
#include "CaSi.h"
#include"Career.h"
#include<iostream>
using namespace std;
void CaSi::Nhap()
{
	Career::Nhap();
	cout << "so bai hat: ";
	cin >> sobaihat;
	cout << "bai hat famous nhat: ";
	cin >>bestsong;
}
void CaSi::Xuat()
{
	Career::Xuat();
	cout << "so bai hat: " << sobaihat << endl;
	cout << "bai hat hay nhat: " << bestsong << endl;
}