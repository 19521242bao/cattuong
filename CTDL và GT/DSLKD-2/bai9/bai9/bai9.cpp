// bai9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct node {
	int info;
	node* pNext;
};
struct List {
	node* pHead;
	node* pTail;
};
void CreateList(List& l) {
	l.pHead = NULL;
	l.pTail = NULL;
}
node* CreateNode(int x) {
	node* p;
	p = new node;
	p->info = x;
	p->pNext = NULL;
	return p;
}

void AddTail(List& l, node* p)
{
	if (l.pHead == NULL)
	{
		l.pHead = p;
		l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;//gán lại địa chỉ ô tiếp theo thành p;
		l.pTail = p;//phần tử cuối trở thành p
	}
}
void nhap(List& l)
{
	while (1)
	{
		int x;
		cin >> x;
		if (x == 0)
			break;
		node* p = CreateNode(x);
		AddTail(l, p);//thêm phần tử vào cuối danh sách
	}

}
void xoa1(List &l,node *p,node*q)
{
	q->pNext = p->pNext;
	delete p;
}
void RemoveAfter(List l, node* p, node* q)//q là node trươc p
{
	if (p == l.pHead)
	{
		l.pHead = l.pHead->pNext;
		delete p;
	}
	else
	{
		if (p == l.pTail)
		{
			l.pTail = q;
			delete p;
		}
		else
		{
			q->pNext = p->pNext;
			delete p;
		}
	}
}
void xoaTatca(List &l, int x)
{
	node* p = l.pHead;
	node* q = NULL;
	int dem = 0;
	while (p != NULL)
	{
		if (p->info == x)
		{
			dem++;
			RemoveAfter(l, p, q);
			if (q == NULL)
				p = l.pHead;
			else
				p = q->pNext;
		}
		else
		{
			q = p;
			p = p->pNext;
		}
	}
	if (dem == 0)
		cout << "Khong tim thay " << x << " trong danh sach:";

}
void xuat(List l)
{
	node* p = l.pHead;
	while (p != NULL)
	{
		cout << p->info << " ";
		p = p->pNext;
	}


}



int main()
{
	List l;
	CreateList(l);
	nhap(l);
	int x;
	cin >> x;
	if (l.pHead == NULL) cout << "Danh sach rong.";
	else {
		xoaTatca(l, x);
		if (l.pHead == NULL) 
			cout << "Danh sach rong.";
		else
			xuat(l);
	}
	return 0;
}