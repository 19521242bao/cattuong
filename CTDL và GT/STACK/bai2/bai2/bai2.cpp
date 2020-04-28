// bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
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
	l.pTail = NULL;
}

node* CreateNode(int x)
{
	node* t = new node;

	t->info = x;
	t->pNext = NULL;

	return t;
}

void AddTail(List& l, node* p)
{
	if (l.pHead == NULL)
		l.pHead = l.pTail = p;
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}

bool isEmpty(List l)
{
	return (l.pHead == NULL);
}

void enqueue(List& l, int x)
{
	node* p = CreateNode(x);
	if (l.pHead == NULL)
	{
		if (x == 0)
			return;
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}

void dequeue(List& l)
{
	node* t = l.pHead;

	while (t->pNext->pNext != NULL)
		t = t->pNext;

	t->pNext = NULL;
}
int main()
{
	List q;
	CreateList(q);
	long long x;
	cin >> x;
	if (x == 0)
		return cout << 0, 0;

	do
	{
		enqueue(q, x % 10);
		x /= 10;
	} while (x > 0);

	for (node* t = q.pHead; t != NULL; t = t->pNext)
		cout << t->info;

	return 0;

}
