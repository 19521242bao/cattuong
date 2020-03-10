// BAI1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<functional>
#include<algorithm>

using namespace std;
void nhapMang(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

}
void xuatMangTangDan(int a[], int n)
{
	sort(a, a + n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
struct toaDo
{
	int hoanhdo;
	int tungdo;
};
void  nhapdiem(toaDo &x)
{
	
	cin >> x.hoanhdo;
	cin >> x.tungdo;
}
void xuatDiem(toaDo& x)
{
	cout << "hoanh do cua diem la " << x.hoanhdo<<" ";
	cout << "tung do cua diem la " << x.tungdo << endl;
}
void nhaptoado(int& n, toaDo a[])
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		nhapdiem(a[i]);
	}
}
void xuatMang(int n, toaDo a[])
{
	for (int i = 0; i < n; i++)
	{
		xuatDiem(a[i]);
	}
}
float disTance(toaDo a, toaDo b)
{
	int hieuhoanhdo = a.hoanhdo - b.hoanhdo;
	int hieutungdo = a.tungdo - b.tungdo;
	int distance = pow(hieuhoanhdo, 2) + pow(hieutungdo, 2);
	distance = (float)sqrt(distance);
	return distance;
}
void distanceMax(int n, toaDo a[])
{
	int max1 = 0, b;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			b = disTance(a[i], a[j]);
			max1 = max(b, max1);
		}
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (max1 == disTance(a[i], a[j]))
			{
				xuatDiem(a[i]);
				xuatDiem(a[j]);
			}
}
int main()
{
	int n;
	toaDo a[1001];
	nhaptoado(n, a);
	distanceMax(n, a);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
