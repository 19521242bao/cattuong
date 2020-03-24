// bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;
struct toado {
	float x;
	float y;
};
void nhapToado(toado &a)
{
	cout << "Nhap toa do \n";
	cout << "Nhap x";
	cin >> a.x;
	cout << "Nhap y";
	cin >> a.y;
}
void xuatToado(toado a)
{
	cout << "toa do:" << a.x << ":" << a.y;
	cout << endl;
}
float disTance(toado a,toado b)
{
	float s = pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
	return s;
}
void tinhTien(toado &a, int x0, int y0)
{
	a.x += x0;
	a.y += y0;
}

int main()
{
	int n;
	toado a[1001];
	cin >> n;
	toado b;
	nhapToado(b);
	tinhTien(b,2,3);
	xuatToado(b);
	/*for (int i= 0; i < n; i++)
		nhapToado(a[i]);*/
	/*for (int i = 0; i < n; i++)
		xuatToado(a[i]);*/
	/*int max1 = -1;
	int  min1 = 100000001;
	int s1;
	for(int i=1;i<n;i++)
		for (int j = 0; j < i; j++)
		{
			s1 = disTance(a[i], a[j]);
			max1 = max(max1, s1);
			min1 = min(min1, s1);
		}
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
		{
			s1 = disTance(a[i], a[j]);
			if (s1 == max1)
			{
				xuatToado(a[i]);
				xuatToado(a[j]);
				i = n;
				break;
			}
			
		}
	int s2;
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
		{
			s2 = disTance(a[i], a[j]);
			if (s2 == min1)
			{
				xuatToado(a[i]);
				xuatToado(a[j]);
				i = n;
				break;
			}

		}
	*/
	
		
	
}

