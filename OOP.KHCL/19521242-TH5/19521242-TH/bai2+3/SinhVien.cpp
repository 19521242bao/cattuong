
#include "SinhVien.h"
#include"Career.h"
using namespace std;
void SinhVien::Nhap()
{
	Career::Nhap();
	cout << "nhap mssv: ";
	cin >> mssv;
	cout << "nhap ten truong: ";
	cin >> SchoolName;
}
void SinhVien::Xuat()
{
	Career::Xuat();
	cout << mssv << endl;
	cout << SchoolName << endl;
}