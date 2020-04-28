
// b24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct node
{
	int info;
	node* pNext;
};
struct List
{
	node* pHead;
};
void CreateList(List& l)
{
	l.pHead = NULL;
}
node* CreateNode(int x)
{
	node* p;
	p = new node;
	p->info = x;
	p->pNext = NULL;
	return p;
}
bool isEmpty(List l)
{
	if (l.pHead == NULL)
		return true;
	return false;
}
void Addhead(List& l, node* p)
{
	if (isEmpty(l) == true)
	{
		l.pHead = p;
	}
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
void destack(List& l)
{
	if (isEmpty(l) == true)
		return;
	else
	{
		node* p = l.pHead;
		l.pHead = l.pHead->pNext;
		delete p;
	}
}
void enstack(List& l, int x)
{
	node* p = CreateNode(x);
	Addhead(l, p);
}
void xuat(List l)
{
	node* p = l.pHead;
	while (p != NULL)
	{
		cout << p->info;
		p = p->pNext;
	}
}
void DoiCoSo(List& l, int n)
{
	int p = 0;
	while (n != 0)
	{
		p = n % 2;
		enstack(l, p);
		n /= 2;
	}
}
int main()
{
	List l;
	CreateList(l);
	long long x;
	cin >> x;
	DoiCoSo(l, x);
	xuat(l);
	return 0;
}