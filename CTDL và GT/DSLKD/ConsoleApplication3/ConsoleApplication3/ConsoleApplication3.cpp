// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//cài đặt cơ bản về danh sách lk đơn
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
void Nhap(List& l)
{
	while (1)
	{
		int x;
		cin >> x;
		if (x == -1)
			break;
		Node* p = CreateNode(x);
		AddTail(l, p);//thêm phần tử vào cuối danh sách
	}
	
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

int len(List L)
{
	int dem = 0;
	Node* p = L.pHead;
	while (p!=NULL)
	{
		dem++;
		p->pNext;
	}
	return dem;
}
int main()
{
    std::cout << "Hello World!\n";
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
