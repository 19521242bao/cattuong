#include <iostream>
#include"Career.h"
#include"CaSi.h"
#include"CongNhan.h"
#include"HocSinh.h"
#include"SinhVien.h"
#include"NgheSi.h"
using namespace std;
int main()
{
	Career arr[100];
	HocSinh a[10];
	SinhVien b[10];
	CongNhan c[10];
	CaSi d[10];
	NgheSi e[10];
	int n, n1 = 0, n2 = 0,n3=0,n4=0,n5=0;
	cout << "Nhap so nguoi: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap nguoi thu " << i + 1 << endl;
		int chon = 0;
		cout << "Chon 1,2,3,4,5 ung voi hoc sinh,sinh vien,cong nhan,casi,nghesi " << endl;
		cin >> chon;
		switch (chon)
		{
		case 1:
			a[n1].Nhap();
			n1++;
			break;
		case 2:
			b[n2].Nhap();
			n2++;
			break;
		case 3:
			c[n3].Nhap();
			n3++;
			break;
		case 4:
			d[n4].Nhap();
			n4++;
			break;
		case 5:
			e[n5].Nhap();
			n5++;
			break;
		}
	}
	for (int i = 0; i < n1; i++)
		a[i].Xuat();
	for (int i = 0; i < n2; i++)
		b[i].Xuat();
	for (int i = 0; i < n3; i++)
		c[i].Xuat();
	for (int i = 0; i < n4; i++)
		d[i].Xuat();
	for (int i = 0; i < n5; i++)
		e[i].Xuat();

	return 0;

}