// bai21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
using namespace std;
struct node {
	char info;
	node* pNext;
};
struct List {
	node* pHead;
	node* pTail;
};
void CreateList(List& l)
{
	l.pHead = l.pTail = NULL;
}
node* CreateNode(char x)
{
	node* p = new node;
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
void AddTail(List& l, node* p)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}
void Xuat(List l)
{
	if(isEmpty(l)==true)
		cout << "Hang doi rong.";
	else
	{
		cout << "Cac gia tri co trong hang doi la: ";
		node* p = l.pHead;
		while (p != NULL)
		{
			cout << p->info << "";
			p = p->pNext;
		}
	}
	cout << endl;
}
void enqueue(List& l, char x)
{
	node* p = CreateNode(x);
	AddTail(l, p);

}
int dequeue(List& l)
{
	if (!isEmpty(l))
	{
		return 1;
	}

	return 0;

}

int main()
{
	char c;
	cin >> c;
	string s = "";
	cin >> s;
	List queue;
	CreateList(queue);
	if (s.length() == 0)
	{
		cout << "Chuoi rong.";
		return 0;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == c)
		{
			if (dequeue(queue) == 1)
			{
				
				cout << queue.pHead->info;
				queue.pHead = queue.pHead->pNext;
				if (queue.pHead == NULL)
					queue.pTail = NULL;
			}
			else
				cout << "Chuoi rong.";
		}
		else
			enqueue(queue, s[i]);
	}
	cout << endl;
	Xuat(queue);
}
	//###I