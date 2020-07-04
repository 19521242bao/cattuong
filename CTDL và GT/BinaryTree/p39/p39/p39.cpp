
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
void nhap(List& l,int&n)
{
	cin >> n;
	int i = 1;
	while (i<=n)
	{
		int x;
		cin >> x;
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
node* Insert(node* root, int info)
{

	if (root == NULL)
	{
		node* p = new node;
		p->left = NULL;
		p->right = NULL;
		p->data = info;
		return p;
	}
	if (LeftOf(info, root))
		root->left = Insert(root->left, info);
	else if (RightOf(info, root))
		root->right = Insert(root->right, info);
	return root;
}
void LNR1(node* root,int &dem)
{
	if (root != NULL)
	{
		LNR1(root->left,dem);
		if (root->left == NULL && root->right == NULL)
			dem++;
		LNR1(root->right,dem);
	}
}
void LNR(node* root)
{
	if (root != NULL)
	{
		LNR(root->left);
		if(root->left==NULL&&root->right==NULL)
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
bool Search(node* root, int x)
{
	if (root == NULL)
		return false;
	else
	{
		if (root->data == x)
			return true;
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
	List l, Left, Right, l1;
	CreateList(l);
	CreateList(l1);
	int n;
	/*long double tbc, tong;*/
	nhap(l,n);
	/*nhap(l1);*/
	/*tbc = (long double)tong / n;*/
	node* p = l.pHead;
	node* root = NULL;
	bool kt = false;
	while (p != NULL)
	{
		root = Insert(root, p->data);
		p = p->pNext;
	}
	node* p1 = l1.pHead;
	while (p1 != NULL)
	{
		int x = p1->data;
		if (Search(root, x) == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		p1 = p1->pNext;
	}
	int dem = 0;
	LNR1(root, dem);
	cout << dem << endl;
	LNR(root);
	/*cout << "LNR: ";
	LNR(root);
	cout << endl;
	cout << "LRN: ";
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