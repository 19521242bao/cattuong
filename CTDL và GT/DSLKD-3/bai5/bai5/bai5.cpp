// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;
struct node
{
	int info;
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
		AddTail(l, p);//thêm phần tử vào cuối danh sách
	}

}
int kT(List l)
{
	node* q = l.pHead;
	node* p = l.pHead->pNext;
	int dem = 0, demtang = 0, demgiam = 0, dembang = 0;
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
	return 0;

}
void solve2(List l, int x, node* q)
{
	node* p = CreateNode(x);
	if (q != NULL)
	{
		p->pNext = q->pNext;
		q->pNext = p;
		if (q = l.pTail)
			l.pTail = p;
	}
}
void solve1(List &l, int x)
{
	node* q = l.pHead;
	node* p = q->pNext;
	node* p1 = CreateNode(x);
	int dem = 1;
	if (x <= q->info)
		AddHead(l, p1);
	
	else
	{
		if (x >= l.pTail->info)
			AddTail(l, p1);
		else
		{
			while (p != NULL)
			{

				if (q->info <= x && p->info >= x)
				{
					solve2(l, x, q);
					break;
				}
				q = p;
				p = p->pNext;

			}
		}
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
	List L;
	CreateList(L);
	nhap(L);
	
	if (L.pHead == 0)
	{
		cout << "Danh sach rong.";
		return 0;
	}
	
	cout << "Danh sach vua nhap la: ";
	xuat(L);
	cout << endl;
	int a1 = kT(L);
	if (a1 !=1)
		cout << "Danh sach khong tang.";
	else
	{
		int x;
		cin >> x;
		
		cout << "Danh sach sau khi chen so " <<x<<" la: ";
		solve1(L, x);
		xuat(L);

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
