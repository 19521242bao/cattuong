#include<iostream>
#include<math.h>
#include<functional>
#include<algorithm>
#include "ClassToaDo.h"
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	ClassToaDo a[100];
	
	for (int i = 0; i < n; i++)
	{
		string b;
		cout << "ban co muon nhap toa do khong";
		cin >> b;//YES hoac NO
		if (b == "YES")
		{
			cout << "nhap toa do cua diem thu " << i + 1 << ": " << endl;
			a[i].Nhap();
		}
		else
			continue;
	}
	double max1 = 0;
	for (int i = 0; i < n; i++)
		a[i].Xuat();
	//double min1 = a[0].Distance(a[1]);
	//for(int i=1;i<n;i++)
	//	for (int j = 0; j < i; j++)
	//	{
	//		double b=a[i].Distance(a[j]);
	//		min1 = min(b, min1);
	//		max1 = max(b, max1);
	//	}
	//cout << "Khoang cach lon nhat la" << max1<<endl;
	//cout << "Khoang cach nho nhat la" << min1<<endl;
	//int x, y;
	//cout << "nhap hoanh do vector";
	//cin >> x;
	//cout << "nhap tung do vector" ;
	//cin >> y;
	//for (int i = 0; i < n; i++)
	//{
	//	 a[i].TinhTien(x, y);
	//	a[i].Xuat();
	//}

}