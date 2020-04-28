﻿#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;
struct Node
{
	int Info;
	Node* pNext;
	int cont;
	//một phần tử gồm giá trị và địa chỉ của phần tử tiếp theo
};
struct List
{
	Node* pHead;//phần tử đầu mảng
	Node* pTail;//phần tử cuối
};
void CreateList(List& l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}
Node* CreateNode(int x) {
	Node* p;
	p = new Node;
	p->Info = x;
	p->pNext = NULL;
	return p;
}
void AddHead(List& l, Node* p)
{
	if (l.pHead == NULL)
	{
		l.pHead = p;
		l.pTail = p;
	}
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
void Nhap(List& l)
{
	while (1)
	{
		int x;
		cin >> x;
		if (x == 0)
			break;
		Node* p = CreateNode(x);
		AddHead(l, p);//thêm phần tử vào cuối danh sách
	}

}
void Xuat(List l)
{

	Node* p = l.pHead;
	while (p != NULL)
	{
		cout << p->Info << " ";
		p = p->pNext;
	}
}

int  timKiem(Node* p, int x, List l)
{
	Node* p1 = l.pHead;
	int  a;
	while (p1 != p)
	{
		a = p1->Info;
		if (a == x)
			return 0;
		p1 = p1->pNext;
	}
	return -1;
}
int  solve1(List l)
{


	Node* p = l.pHead;
	int dem = 0, dem2 = 0;;
	int x;
	int max1 = 0;
	while (p != NULL)
	{
		x = p->Info;
		if (timKiem(p, x, l) == -1)
		{
			dem = 1;
			dem2++;
			Node* b = p->pNext;

			while (b != NULL)
			{
				if (b->Info == p->Info)
					dem++;
				b = b->pNext;
			}
			p->cont = dem;
			max1 = max(dem, max1);
		}
		p = p->pNext;
	}
	if (timKiem(p, x, l) == -1)
		{
	return max1;

}
void Xuat1(List l)
{

	Node* p = l.pHead;
	int max1 =solve1(l);
	while (p != NULL)
	{
		if(p->cont==max1)
			cout << p->Info << ": " << max1 << endl;
		p = p->pNext;

	}	
	}

int main()
{
	List L;
	CreateList(L);
	Nhap(L);
	
	if (L.pHead==NULL)
	{
		cout << "Danh sach rong.";
		return 0;
	}
	Xuat(L);
	cout << endl;
	Xuat1(L);
	Xuat1;

	return 0;
}