#include <iostream>
using namespace std;
struct TNode
{
	int Key;
	int dem;
	TNode* pLeft;
	TNode* pRight;
};
typedef TNode* TREE;
void CreateTree(TREE& T)
{
	T = NULL;
}
TNode* CreateNode(int x)
{
	TNode* p;
	p = new TNode;
	p->Key = x;
	p->pLeft = NULL;
	p->pRight = NULL;
	return p;
}
int insertNode(TREE& T, int x)
{
	if (T != NULL)
	{
		if (T->Key == x)
		{
			T->dem++;
			return 0;
		}
		if (T->Key > x)
			return insertNode(T->pLeft, x);
		else
			return insertNode(T->pRight, x);
	}
	T = new TNode;
	T->dem = 1;
	T->Key = x;
	T->pLeft = T->pRight = NULL;
	return 1;
}
void TimLaLonNhatTrenCay(TREE& T, TNode*& k)
{
	if (T != NULL)
	{
		TimLaLonNhatTrenCay(T->pRight, k);
		if (k->Key < T->Key)
			k = T;
	}
}
void DeleteNodeX1(TREE& T)
{
	if (T->pRight != NULL)
		DeleteNodeX1(T->pRight);
	else
	{
		T = T->pLeft;
	}
}
void Nhap(TREE& T)
{
	while (1)
	{
		int x;
		char s;
		cin >> s;
		if (s == 'E')
			break;
		switch (s)
		{
		case 'U':
		{
			cin >> x;
			insertNode(T, x);
			break;
		}
		case 'O':
		{
			if (T != NULL)
			{
				TNode* k = new TNode;
				TimLaLonNhatTrenCay(T, k);
				if (k->dem > 1)
				{
					cout << k->Key << endl;
					k->dem--;
				}
				else
				{
					cout << k->Key << endl;
					DeleteNodeX1(T);
				}
			}
			else
				cout << "NULL" << endl;
			break;
		}
		}
	}
}
int main()
{
	TREE T;
	CreateTree(T);
	Nhap(T);
	return 0;
}