#include<functional>
#include<iostream>
#include "ClassVecTor.h"
using namespace std;
int main()
{
	ClassVecTor a[100],temp;
	int n;
	cin >> n;
	int m;
	
	cin >> m;//so chieu của vector
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vecor thu " << i + 1<<endl;
		a[i].Nhap(m);
	}
	// so sánh khoảng cách
	/*for (int i = 0; i < n; i++)
		a[i].Xuat();
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Norm() > a[j].Norm())
			{
				 temp=a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	for (int i = 0; i < n ; i++)
		a[i].Xuat();*/
	//tịnh tiến vector
	/*for (int i = 0; i < n; i++)
		a[i].TinhTien(a[i]);*/
	/*for (int i = 0; i < n; i++)
		a[i].Xuat();*/
	temp = a[0].Cong(a[0]);
	temp.Xuat();
	temp = a[0].Tru(a[1]);
	temp.Xuat();

}