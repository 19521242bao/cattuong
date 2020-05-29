
// TapHop.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
bool Search(List l,int x)
{
	if (l.pHead == NULL)
		return true;
	node* p = l.pHead;
	while (p != NULL)
	{
		if (p->info == x)
			return true;
		p = p->pNext;
	}
	return false;
}
void Giao2TH(List l1, List l2, List& l)
{
	node* p = l1.pHead;
	while (p != NULL)
	{
		int x = p->info;
		if (Search(l2, x) == true)
		{
			node* p1 = CreateNode(x);
			AddHead(l, p1);
		}
		p = p->pNext;
	}
}
void Hop2TH(List l1, List l2, List& l)
{
	node* p = l1.pHead;
	while (p != NULL)
	{
		int x = p->info;
		node* p1 = CreateNode(x);
		AddHead(l, p1);
		p = p->pNext;
	}
	node* p2 = l2.pHead;
	while (p2 != NULL)
	{
		int x = p2->info;
		if (Search(l, x) == false)
		{
			node* p3 = CreateNode(x);
			AddHead(l, p3);
		}
		p2 = p2->pNext;
	}
}
void Hieu2TH(List l1, List l2, List& l)
{
	node* p = l1.pHead;
	while (p != NULL)
	{
		int x = p->info;
		if (Search(l2, x) == false)
		{
			node* p1 = CreateNode(x);
			AddHead(l, p1);
		}
		p = p->pNext;
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


}




int main()
{
	List l1,l2,l3,l4,l5;
	CreateList(l1);
	CreateList(l2);
	CreateList(l3);
	CreateList(l4);
	CreateList(l5);
	nhap(l1);
	nhap(l2);
	Giao2TH(l1, l2, l3);
	xuat(l3);
	cout << endl;
	Hop2TH(l1, l2, l4);
	xuat(l4);
	cout << endl;
	Hieu2TH(l1, l2, l5);
	xuat(l5);

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
