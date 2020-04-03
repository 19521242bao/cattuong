// BAI6.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void ReverseList(List& l)
{
	node *previous=NULL;
	while (l.pHead != NULL)
	{
		node* Next = l.pHead->pNext;
		l.pHead->pNext = previous;
		previous = l.pHead;
		l.pHead = Next;
	}
	l.pHead = previous;
	l.pTail = l.pHead;
	while (l.pTail->pNext != NULL)
	{
		l.pTail = l.pTail->pNext;
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
	List l;
	CreateList(l);
	nhap(l);
	if (l.pHead == NULL) cout << "Danh sach rong.";
	else {
		cout << "Danh sach vua nhap la: ";
		xuat(l);
		ReverseList(l);
		cout << endl << "Danh sach sau khi dao nguoc la: ";
		xuat(l);
	}
	return 0;
}