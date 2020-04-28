
// bqi17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;
struct Node
{
	int Info;
	Node* pNext;
	int cont;
	//một phần tử gồm giá trị và địa chỉ của phần tử tiếp theo
};
struct List
{
	Node* pHead;//phần tử đầu mảng
	Node* pTail;//phần tử cuối
};
void CreateList(List& l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}
Node* CreateNode(int x,int dem) {
	Node* p;
	p = new Node;
	p->Info = x;
	p->pNext = NULL;
	p->cont = dem;
	return p;
}
void AddTail(List& l, Node* p)
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
void Nhap(List& l)
{
	int dem = 0;
	while (1)
	{
		int x;
		cin >> x;
		if (x == 0)
			break;
		dem++;
		Node* p = CreateNode(x,dem);
		
		AddTail(l, p);//thêm phần tử vào cuối danh sách
		

	}

}
void Xuat(List l)
{

	Node* p = l.pHead;
	while (p != NULL)
	{
		cout << p->Info << " ";
		p = p->pNext;
	}
}

bool NT(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
void  solve1(List l)
{
	Node* p = l.pHead;
	while (p != NULL)
	{
		if (p->cont % 2 == 0 && NT(p->Info) == true)
			cout << p->Info << " ";
		p=p->pNext;
	}
}

int main()
{
	List L;
	CreateList(L);
	Nhap(L);

	if (L.pHead == NULL)
	{
		cout << "Danh sach rong.";
		return 0;
	}
	cout << endl;
	solve1(L);

	return 0;
}