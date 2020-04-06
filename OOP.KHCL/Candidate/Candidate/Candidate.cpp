// Candidate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Candidate.h"

void Candidate::Nhap()
{
	cout << "nhap ho ten: ";
	fflush(stdin);
	cin >> hoten;
	cout << "nhap mssv: ";
	cin >> mssv;
	cout << "nhap ngay sinh: ";
	fflush(stdin);
	cin >> date;
	cout << "nhap diem Toan: ";
	cin >> dToan;
	cout << "nhap diem Van: ";
	cin >> dVan;
	cout << "nhap diem Anh: ";
	cin >> dAnh;
}
void Candidate::Xuat()
{
	cout << "ho ten la" << hoten << endl;
	cout << "mssv la" << mssv << endl;
	cout << "ngay sinh la" << date << endl;
	cout << "diem toan la" << dToan << endl;
	cout << "diem van la" << dVan << endl;
	cout << "diem anh la" << dAnh << endl;
}
float Candidate::ToanVanAnh()
{
	return dToan + dVan+dAnh;
}