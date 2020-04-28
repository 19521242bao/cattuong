// bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
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
Node* CreateNode(int x, int dem) {
	Node* p;
	p = new Node;
	p->Info = x;
	p->pNext = NULL;
	p->cont = dem;
	return p;
}
void AddHead(List& l, Node* p)
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
bool NT(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
void Nhap(List& l,vector<int>&arr)
{
	int dem = 0;
	while (1)
	{
		int x;
		cin >> x;
		if (x == 0)
			break;
		if (NT(x) == true)
		{
			dem = 1;
			arr.push_back(x);
		}
		Node* p = CreateNode(x, dem);
		dem = 0;
		AddHead(l, p);//thêm phần tử vào cuối danh sách
		

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
void solve(List& l, vector<int>& arr)
{
	sort(arr.begin(), arr.end());
	Node *p = l.pHead;
	int i = 0;
	while (p != NULL)
	{
		if (p->cont == 1)
		{
			p->Info = arr[i];
			i++;
		}
		p = p->pNext;
	}
}

int main()
{
	List L;
	vector<int>arr;
	CreateList(L);
	
	Nhap(L,arr);
	if (L.pHead == NULL)
	{
		cout << "Danh sach rong.";
		return 0;
	}
	Xuat(L);
	solve(L, arr);
	cout << endl;
	Xuat(L);
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
