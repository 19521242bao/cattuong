
  // bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	node* pTail;
};

void CreateList(List &l)
{
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
bool isEmpty(List l)
{
	if (l.pHead == NULL)
		return true;
	return false;
}
void AddHead(List& l, node* p)
{
	if (isEmpty(l)==true)
	{
		l.pHead = p;
		
	}
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
void Pop(List& l)
{
	if (isEmpty(l) == true)
		cout << "Stack rong."<<endl;
	else
	{
		node* p = l.pHead;
		l.pHead = l.pHead->pNext;
		delete p;
	}

}
void Nhap(List& l, int a)
{
	while (1)
	{
		int x;
		cin >> x;
		if (x == 0)
			break;
		if (x != a)
		{
			node* p = CreateNode(x);
			AddHead(l, p);
		}
		else
		{
			Pop(l);
		}
	}
}
void Xuat(List l)
{
	node* p = l.pHead;
	while (p != NULL)
	{
		cout << p->info <<  " ";
		p = p->pNext;
	}
}
int main()
{
	List l;
	CreateList(l);
	int x;
	cin >> x;
	Nhap(l, x);
	if (isEmpty(l) == true)
		cout << "Stack rong.";
	else
	{
		cout << "Cac gia tri co trong stack la: ";
		Xuat(l);
	}
	


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
