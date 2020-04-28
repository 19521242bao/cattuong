
// vd.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void CreateList(List& l)
{
	l.pHead = NULL;
	
}
bool isEmpty(List l)
{
	if (l.pHead == NULL)
		return true;
	return false;
}
node* CreateNode(int x)
{
	node* p;
	p = new node;
	p->info = x;
	p->pNext = NULL;
	return p;
}
void AddHead(List& l, node* p)
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
void enstack(List& l, int x)
{
	while (x != 0)
	{
		int n = x %2;

		x /= 2;
		node* p = CreateNode(n);
		AddHead(l, p);
	}

}

//int  Pop(List& l, int& trave)
//{
//	if (!isEmpty(l))
//	{
//		node* p = l.pHead;
//		l.pHead = l.pHead->pNext;
//		trave = p->info;
//		if (l.pHead == NULL)
//			l.pTail = NULL;
//		return 1;
//	}
//	return 0;
//
//}
void destack(List& l)
{
	node* t = l.pHead;

	while (t->pNext->pNext != NULL)
		t = t->pNext;

	t->pNext = NULL;
}


int main()
{
	List st;
	CreateList(st);
	long long x;
	cin >> x;
	if (x == 0)
		return cout << 0, 0;
	enstack(st, x);
	for (node* t = st.pHead; t != NULL; t = t->pNext)
		cout << t->info;

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
