
// 25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
#include<string>
using namespace std;
struct phanso {
	long long tuso;
	long long mauso;
};
bool soSanh(phanso a,long long x,long long y)
{
	long long s1 = a.tuso * y;
	long long s2 = a.mauso * x;
	if (s1==s2)
		return true;
	return false;
}
struct node
{
	phanso info;
	node* pNext;
	//một phần tử gồm giá trị và địa chỉ của phần tử tiếp theo
};
struct List
{
	node* pHead;//phần tử đầu mảng
	node* pTail;//phần tử cuối
};
void CreateList(List& l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}
node* CreateNode(long long x, long long y) {
	node* p;
	p = new node;
	p->info.tuso = x;
	p->info.mauso = y;
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
		long long y;
		long long x;
		cin >> x;
		cin >> y;
		if (y == 0)
			break;
		node* p = CreateNode(x, y);
		AddTail(l, p);//thêm phần tử vào cuối danh sách
	}

}
void xuat(List l)
{
	node* p = l.pHead;
	while (p != NULL)
	{
		cout << p->info.tuso << "/" << p->info.mauso << " ";
		p = p->pNext;
	}
}

int main()
{
	List L;
	CreateList(L);
	nhap(L);

	if (L.pHead == 0)
	{
		cout << "Danh sach rong.";
		return 0;
	}
	long long x, y;
	cin >> x >> y;
	cout << "Danh sach vua nhap la: ";
	xuat(L);
	cout << endl;
	node* p = L.pHead;
	int dem = 0;
	while (L.pHead != NULL)
	{
		if (soSanh(L.pHead->info,x,y) == true)
		{
			dem++;
			if (dem == 1)
				cout << "Cac phan so bang " << x << "/" << y << " co trong danh sach la: ";
			cout << L.pHead->info.tuso << "/" << L.pHead->info.mauso << " ";
		}
		L.pHead = L.pHead->pNext;
	}
	if (dem == 0)
	{
		cout << "Khong co phan so nao bang " << x << "/" << y << " trong danh sach.";
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
