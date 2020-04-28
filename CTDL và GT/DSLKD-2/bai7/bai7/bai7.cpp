// bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void ReverseList(List& l)
{
	node* previous = NULL;
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
void xoa(List l,int x)
{
	node* p1 = l.pHead;
	node* p2 = l.pTail;
	
	if (p1->info == x)
	{
		delete p1;
		if (p1 == p2)
			cout << "Danh sach rong.";
	}
	else
	{
		int dem = 0;
		int id;
		node* prev=l.pHead;
		node* p2 = l.pHead->pNext;
		for (node* p = p2; p; p = p->pNext)
		{
			if (p->info == x)  // lúc này p là node tiếp theo, prev vẫn là node trước đó
			{
				dem++;
				prev->pNext = p->pNext;
				delete p;
				break;
			}
			prev = p;  // cho đến khi chạy đến đây

		}
		if (dem == 0)
			cout << "Khong tim thay " << x << " trong danh sach:"<<endl;

	
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
	int x;
	cin >> x;
	if (l.pHead == NULL) cout << "Danh sach rong.";
	else {
		xoa(l, x);
		if (l.pHead == NULL)
			cout << "Danh sach rong.";
		else
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
