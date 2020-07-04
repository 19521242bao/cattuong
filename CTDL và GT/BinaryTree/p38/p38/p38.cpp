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
void nhap(List& l, int& n, long double& tong)
{
	cin >> n;
	int i = 1;
	tong = 0;
	while (i <= n)
	{
		int x;
		cin >> x;
		tong += x;
		node* p = CreateNode(x);
		AddTail(l, p);
		i++;
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
node* Insert(node* root, int info, bool& kt, long double tbc)
{
	if (info == tbc)
		kt = true;
	if (root == NULL)
	{
		node* p = new node;
		p->left = NULL;
		p->right = NULL;
		p->data = info;
		return p;
	}
	if (LeftOf(info, root))
		root->left = Insert(root->left, info, kt, tbc);
	else if (RightOf(info, root))
		root->right = Insert(root->right, info, kt, tbc);
	return root;
}
void LNR(node* root)
{
	if (root != NULL)
	{
		LNR(root->left);
		cout << root->data << " ";
		LNR(root->right);
	}
}
void LRN(node* root)
{
	if (root != NULL)
	{
		LRN(root->left);
		LRN(root->right);
		cout << root->data << " ";
	}
}
void RNL(node* root)
{
	if (root != NULL)
	{

		RNL(root->right);
		cout << root->data << " ";
		RNL(root->left);
	}
}
void RLN(node* root)
{
	if (root != NULL)
	{

		RLN(root->right);
		RLN(root->left);
		cout << root->data << " ";

	}
}
void NLR(node* root)
{
	if (root != NULL)
	{
		cout << root->data << " ";
		NLR(root->left);
		NLR(root->right);
	}
}
void NRL(node* root)
{
	if (root != NULL)
	{
		cout << root->data << " ";
		NRL(root->right);
		NRL(root->left);
	}
}
int main()
{
	List l, Left, Right;
	CreateList(l);
	int n;
	long double tbc, tong;
	nhap(l, n, tong);
	tbc = (long double)tong / n;
	node* p = l.pHead;
	node* root = NULL;
	bool kt = false;
	while (p != NULL)
	{
		root = Insert(root, p->data, kt, tbc);
		p = p->pNext;
	}
	if (kt == true)
		cout << 1;
	else cout << 0;
	cout << endl;
	//	cout << "LNR: ";
	LNR(root);
	cout << endl;
	/*cout<< "LRN: ";
	LRN(root);
	cout << endl;
	cout << "RNL: ";
	RNL(root);
	cout << endl;
	cout << "RLN: ";
	RLN(root);
	cout << endl;
	cout << "NLR: ";
	NLR(root);
	cout << endl;
	cout << "NRL: ";
	NRL(root);*/
}