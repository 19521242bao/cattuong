// bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void AddHead(List& l, node* p)
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
void nhap(List& l)
{
	while (1)
	{
		int x;
		cin >> x;
		if (x == 0)
			break;
		node* p = CreateNode(x);
		AddHead(l, p);//thêm phần tử vào cuối danh sách
	}

}

void RemoveAfter(List& l, node* p, node* q)//q là node trươc p
{
	if (p == l.pHead)
	{
		l.pHead = l.pHead->pNext;
		delete p;
	}
	else
	{
		q->pNext = p->pNext;
		if (p == l.pTail)
		{
			l.pTail = q;
		}
		delete p;
	}
}
void xoaTrung(List& l)
{
	node* q = l.pHead;
	node* p = q->pNext;
	while (p != NULL)
	{
		node* bp = l.pHead;
		while (bp != p)
		{
			if (bp->info == p->info)
				break;
			bp = bp->pNext;
		}
		if (bp->info == p->info&&bp!=p)
		{
			RemoveAfter(l, p, q);
			p = q->pNext;
		}
		else
		{
			q = p;
			p = p->pNext;
		}

	}

	

}
void xuat(List l)
{
	node* p = l.pHead;
	while (p != NULL)
	{
		cout << p->info << " ";
		p = p->pNext;
	}
	cout << endl;

}



int main()
{
	List l;
	CreateList(l);
	nhap(l);
	if (l.pHead == NULL) cout << "Danh sach rong.";
	else {
		xuat(l);
		xoaTrung(l);
		xuat(l);
	}
	return 0;
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
