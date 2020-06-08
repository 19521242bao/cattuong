#include <iostream>
#include "NhanVien.h"
#include "NVSX.h"
#include "NVVP.h"
using namespace std;
int main()
{

	NVVP arr[100];
	NVSX b[100];

	int n, n1 = 0, n2 = 0;
	cout << "Nhap so nhan vien trong cong ty: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap nhan vien thu " << i + 1 << endl;
		int chon = 0;
		cout << "Chon 1 de nhap NVSX va 2 de nhap NVVP. " << endl;
		cin >> chon;
		switch (chon)
		{
		case 1:
			arr[n1].Nhap();
			n1++;
			break;
		case 2:
			b[n2].Nhap();
			n2++;
			break;
		}
	}
	double TongLuong = 0;
	for (int i = 0; i < n1; i++)
		TongLuong += arr[i].TinhLuong();
	for (int i = 0; i < n2; i++)
		TongLuong += b[i].TinhLuong();

	for (int i = 0; i < n1; i++)
		arr[i].Xuat();
	for (int i = 0; i < n2; i++)
		b[i].Xuat();

	return 0;

}