// dathuc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;
struct DaThuc
{
	int n;
	float* heso; // mảng hệ số dùng con trỏ =mảng
}; 
typedef struct DaThuc DATHUC;
void nhapDaThuc(DATHUC* x)
{
	cout << "nhap bac cua da thuc \n";// bậc đa thức lớn hơn  bằng 1
	cin >> x->n;
	x->heso = new float[x->n + 1];//  cấp phát mảng số thực của đa thức bậc n có n+1 hệ số
	for (int i = 0; i <= x->n; i++)
	{
		cout << "he so bac " << i << " la";
		cin >> x->heso[i];
	}
}
void xuatDaThuc(DATHUC* x)
{
	for (int i = x->n; i >= 1; i--)
		cout << x->heso[i] << "x^" << i << "+";
	cout << x->heso[0];
}
void congDaThuc(DATHUC* x, DATHUC* y, DATHUC* &a)
{
	
	int b = max(x->n, y->n);
	int b1 = min(x->n, y->n);
	a->n = b;
	a->heso = new float[a->n+1];
	for (int i = 0; i <=b1 ; i++)
	{
		a->heso[i] = x->heso[i] + y->heso[i];
	}
	if (x->n >= y->n)
		for (int i = b1 + 1; i <= b; i++)
			a->heso[i] = x->heso[i];
	else
		for (int i = b1 + 1; i <= b; i++)
			a->heso[i] = y->heso[i];

}
void truDaThuc(DATHUC* x, DATHUC* y, DATHUC*& b)
{
	int a = max(x->n, y->n);
	int a1 = min(x->n, y->n);
	b->n = a;
	b->heso = new float[b->n + 1];
	for (int i = 0; i <= a1; i++)
	{
		b->heso[i] = x->heso[i] - y->heso[i];
	}
	if (x->n >= y->n)
		for (int i = a1 + 1; i <= a; i++)
			b->heso[i] = x->heso[i];
	else
		for (int i = a1 + 1; i <= a; i++)
			b->heso[i] = -y->heso[i];
}
void nhanDaThuc(DATHUC* x, DATHUC* y, DATHUC*& c)
{
	c->n = x->n*y->n;
	c->heso = new float[c->n + 1];
	for (int i = 0; i <= c->n; i++)
		c->heso[i] = 0;
	for(int i=0;i<=x->n;i++)
		for (int j = 0; j <= y->n; j++)
		{
			c->heso[i * j] += x->heso[i] * y->heso[j];
		}
	

}



int main()
{
	DATHUC* x;
	DATHUC* y;
	DATHUC* a;
	DATHUC* b;
	DATHUC* c;
	x = new DATHUC;
	y = new DATHUC;
	a = new DATHUC;
	b = new DATHUC;
	c = new DATHUC;
	nhapDaThuc(x);
	nhapDaThuc(y);
	truDaThuc(x, y, b);
	congDaThuc(x, y, a);
	nhanDaThuc(x, y, c);
	xuatDaThuc(b);
	xuatDaThuc(c);	
	xuatDaThuc(a);

}


