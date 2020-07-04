



// LAM-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct PhanSo {
	int tu, mau;
};
struct node {
	PhanSo val;
	node* prev, * next;
};
struct List {
	node* Tail;
	node* Head;
};
void CreateList(List &l)
{
	l.Tail = l.Head = NULL;
}

node* CreateNode(PhanSo x)
{
	node* newNode=new node;
	newNode->val.tu = x.tu;
	newNode->val.mau = x.mau;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}
void AddHead(List&l,PhanSo ps)
{
	node* p = CreateNode(ps);
	if (l.Head == NULL) {
		l.Head = p;
		l.Tail = p;
		return;
	}
	l.Head->prev = p;
	p->next = l.Head;
	l.Head = p;
}
int Count(List l)
{
	int count = 0;
	node* p = l.Head;
	while (p != NULL)
	{
		int x = p->val.tu;
		int y = p->val.mau;
		if (x % y == 0)
			count++;
		p = p->next;
	}
	return count;
}
node* Searchnode(List l, int x, int y)
{
	node* p = l.Head;
	while (p != NULL)
	{
		int x1 = p->val.tu;
		int y1 = p->val.mau;
		if (x1*y==x*y1)
			return p;
		p = p->next;
	}
	return p;
}
void input(PhanSo &ps)
{
	cin >> ps.tu >> ps.mau;
}
int main()
{
	PhanSo ps;
	List l;
	CreateList(l);
	while (1)
	{
		input(ps);
		if (ps.tu == 0 && ps.mau == 0)
			break;
		AddHead(l, ps);
	}
	cout << "so node trong list co tu so chia het mau so la: "<<Count(l)<<endl;
	node* search = Searchnode(l, 3, 20);
	if (search != NULL)
	{
		cout << "co phan so 3/20 trong danh sach";
			return 0; 
	}
	else
		cout << "ko co phan so 3/20 trong danh sach";
}
