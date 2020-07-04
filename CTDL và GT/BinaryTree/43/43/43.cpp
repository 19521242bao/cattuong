
#include<iostream>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
	node* pNext;
};
struct List
{
	node* pHead;
	node* pTail;
};
void CreateList(List& l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}
node* CreateNode(int& x)
{
	node* p;
	p = new node;
	p->data = x;
	p->pNext = NULL;
	return p;
}
void AddTail(List& l, node* p)
{
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}
void nhap(List& l)
{
	while (true)
	{
		int x;
		cin >> x;
		if (x == 0)
			break;
		node* p = CreateNode(x);
		AddTail(l, p);
		
	}

}
int LeftOf(int info, node* root)
{
	return info < root->data;
}
int RightOf(int info, node* root)
{
	return info > root->data;
}
void Insert(node*& root, int info)
{

	if (root == NULL)
	{
		node* p = new node;
		p->left = NULL;
		p->right = NULL;
		p->data = info;
	}
	if (LeftOf(info, root))
		Insert(root->left, info);
	else if (RightOf(info, root))
		Insert(root->right, info);
}
void LNR(node* root)
{
	if (root != NULL)
	{
		LNR(root->left);
		if (root->left == NULL && root->right == NULL)
			cout << root->data << " ";
		LNR(root->right);
	}
}
void Search(node* root, int x)
{
	if (root != NULL)
	{
		if (root->data == x)
		{
			int dem = 0;
			if (root->left != NULL)
				dem++;
			if (root->right != NULL)
				dem++;
			cout << "Node " << x << "co bac la " << dem << "." << endl;
		}
		else {
			if (root->data > x)
				Search(root->left, x);
			else
				Search(root->right, x);
		}
	}
}
int main()
{
	List l, l1;
	CreateList(l);
	CreateList(l1);
	int n;
	/*long double tbc, tong;*/
	nhap(l);
	nhap(l1);
	/*tbc = (long double)tong / n;*/
	node* p = l.pHead;
	node* root = NULL;
	bool kt = false;
	while (p != NULL)
	{
		Insert(root, p->data);
		p = p->pNext;
	}
	node* p1 = l1.pHead;
	LNR(root);
	while (p1 != NULL)
	{
		int x = p1->data;
		Search(root, x);
		p1 = p1->pNext;
	}
	int dem = 0;

}