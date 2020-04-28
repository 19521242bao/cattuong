#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;
struct Node
{
	int Info;
	Node* pNext;

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
Node* CreateNode(int x) {
	Node* p;
	p = new Node;
	p->Info = x;
	p->pNext = NULL;

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


void AddHead(List &l, Node* p)
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
void Nhap(List& l)
{
	int dem = 0;
	while (1)
	{
		int x;
		cin >> x;
		if (x == 0)
			break;
		Node* p = CreateNode(x);

		AddTail(l, p);//thêm phần tử vào cuối danh sách


	}

}

void Nhap2(List l, int k, List&l1, List& l2)
{
	Node* p1 = l.pHead;
	while (p1 != NULL)
	{
		if (p1->Info % k == 0)
		{
			Node*p=CreateNode(p1->Info);
			AddTail(l1, p);
		}
		else
		{
			Node* p2 = CreateNode(p1->Info);
			AddHead(l2, p2);
		}
		p1 = p1->pNext;
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

void SortIncrease(List l)
{
	for (Node* pTmp = l.pHead; pTmp != NULL; pTmp = pTmp->pNext)
	{
		for (Node* pTmp2 = pTmp->pNext; pTmp2 != NULL; pTmp2 = pTmp2->pNext)
		{
			if (pTmp->Info > pTmp2->Info)
			{
				int tmp = pTmp->Info;
				pTmp->Info = pTmp2->Info;
				pTmp2->Info = tmp;
			}
		}
	}
}

int main()
{
	List L, l1,l2,l3;
	CreateList(L);
	CreateList(l1);
	CreateList(l2);
	CreateList(l3);
	Nhap(L);
	int k;
	cin >> k;
	if (L.pHead == NULL)
	{
		cout << "Danh sach rong.";
		return 0;
	}
	Nhap2(L, k, l1, l2);
	Xuat(l1);
	Xuat(l2);
	return 0;
}