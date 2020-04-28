
// bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
int kT(List l)
{
	node* q = l.pHead;
	node* p = l.pHead->pNext;
	int dem=0, demtang=0, demgiam=0, dembang=0;
	while (p != NULL)
	{
		dem++;
		if (p->info >= q->info)
		{
			demtang++;
		}
		if (p->info == q->info)
			dembang++;
		if (p->info <= q->info)
			demgiam++;
		q = p;
		p = p->pNext;
	}
	if (dem == 0)
		return 0;

	if (dem == demtang && demtang != dembang)
		return 1;
	if (dem == demgiam && demgiam != dembang)
		return -1;
	return 0;

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
int DemSoPhanTu(List l)
{
	node* p = l.pHead;
	int dem = 0;
	while (p != NULL)
	{
		dem++;
		p = p->pNext;
	}
	return dem;
}
int main()
{
	List L;
	CreateList(L);
	nhap(L);
	int a = DemSoPhanTu(L);
	if (a == 0)
	{
		cout << "Danh sach rong.";
		return 0;
	}
	cout << "Danh sach vua nhap la: ";
	xuat(L);
	cout << endl;
	int a1 = kT(L);
	if (a1 == 1)
		cout << "Danh sach tang.";
	else
	{
		if(a1==-1)
			cout << "Danh sach giam.";
		else
			cout << "Danh sach khong tang cung khong giam.";
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
