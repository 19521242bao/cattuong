#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};
struct LinkedList
{
	Node* head;
	Node* tail;
};
void CreateList(LinkedList& l)
{
	l.head = NULL;
	l.tail = NULL;
}

Node* CreateNode(int X)
{
	Node* p=new Node;
	p->data = X;
	p->next = NULL;
	return p;
}

void AddHead(LinkedList& l, Node* Node)
{
	if (l.head == NULL)
	{
		l.head = Node;
		l.tail = Node;
	}
	else
	{
		Node->next = l.head;
		l.head = Node;
	}
}

void AddTail(LinkedList& l, Node* Node)
{
	if (l.head == NULL)
	{
		l.head = Node;
		l.tail = Node;
	}
	else
	{
		l.tail->next = Node;
		l.tail = Node;
	}
}
void Nhap(LinkedList& l)
{
	while (1)
	{
		int x;
		cin >> x;
		if (x < 0)
			break;
		Node* p = CreateNode(x);
		AddHead(l, p);
	}
}


void PrintList(LinkedList l)
{
	if (l.head != NULL)
	{
		Node* Node = l.head;
		while (Node != NULL)
		{
			cout << Node->data << ' ';
			Node = Node->next;
		}
	}
	cout << endl;
}

int Length(LinkedList l)
{
	int count = 0;
	Node* Node = l.head;
	while (Node != NULL)
	{
		count++;
		Node = Node->next;
	}
	return count;
}

Node* Search(LinkedList l, int x)
{
	Node* Node = l.head;
	while (Node != NULL && Node->data != x)
		Node = Node->next;
	if (Node != NULL)
		return Node;
	return NULL;
}

int RemoveHead(LinkedList& l, int& x)
{
	if (l.head != NULL)
	{
		Node* Node = l.head;
		x = Node->data;
		l.head = Node->next;
		delete Node;
		if (l.head == NULL)
			l.tail = NULL;
		return 1;
	}
	return 0;
}

int RemoveTail(LinkedList& l, int& x)
{
	if (l.tail != NULL)
	{
		Node* Node = l.tail;
		x = Node->data;
		l.tail = Node->next;
		delete Node;
		if (l.tail == NULL)
			l.head = NULL;
		return 1;
	}
	return 0;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SortIncrease(LinkedList& l)
{
	for (Node* pTmp = l.head; pTmp != NULL; pTmp = pTmp->next)
	{
		for (Node* pTmp2 = pTmp->next; pTmp2 != NULL; pTmp2 = pTmp2->next)
		{
			if (pTmp->data > pTmp2->data)
			{
				//ko xai swap vi swap cho con tro ma cho gia tri con tro
				int tmp = pTmp->data;
				pTmp->data = pTmp2->data;
				pTmp2->data = tmp;
			}
		}
	}
}
void SortDecrease(LinkedList& l)
{
	for (Node* pTmp = l.head; pTmp != NULL; pTmp = pTmp->next)
	{
		for (Node* pTmp2 = pTmp->next; pTmp2 != NULL; pTmp2 = pTmp2->next)
		{
			if (pTmp->data < pTmp2->data)
			{
				//ko xai swap vi swap cho con tro ma cho gia tri con tro
				int tmp = pTmp->data;
				pTmp->data = pTmp2->data;
				pTmp2->data = tmp;
			}
		}
	}
}
//cau f
void solve2(LinkedList l, int x, Node* q)
{
	Node* p = CreateNode(x);
	if (q != NULL)
	{
		p->next = q->next;
		q->next = p;
		if (q = l.tail)
			l.tail = p;
	}
}
void solve1(LinkedList l, int x)
{
	Node* q = l.head;
	Node* p = q->next;
	Node* p1 = CreateNode(x);
	int dem = 1;
	if (x <= q->data)
		AddHead(l, p1);

	else
	{
		if (x >= l.tail->data)
			AddTail(l, p1);
		else
		{
			while (p != NULL)
			{

				if (q->data <= x && p->data>= x)
				{
					solve2(l, x, q);
					break;
				}
				q = p;
				p = p->next;

			}
		}
	}
}

int main()
{

	LinkedList l;
	CreateList(l);
	Nhap(l);
	PrintList(l);
	int len = Length(l);
	cout << len << endl;
	int x;
	cin >> x;
	Node* p = Search(l, x);
	if (p != NULL)
	{
		cout << "tim thay x trong LIST"<<endl;
	}
	SortDecrease(l);
	PrintList(l);
	SortIncrease(l);
	solve1(l, x);
	PrintList(l);
}

