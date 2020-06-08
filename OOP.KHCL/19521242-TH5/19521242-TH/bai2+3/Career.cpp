// Career.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Career.h"
#include<string>
using namespace std;
void Career::Nhap()
{
	cout << "nhap ho ten: ";
	cin.ignore();
	gets_s(hoten);
	cout << "nhap ngay sinh: ";
	cin >> ngaysinh;
}
void Career::Xuat()
{
	cout << hoten << endl;
	cout << "ngay sinh: " << ngaysinh << endl;

}
