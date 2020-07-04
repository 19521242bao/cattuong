// 42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct node {
	long long val;
	node* left, *right;
	node(long long x)
	{
		val = x;
		left = right = NULL;
	}
};
void insert(node*& tree, long long x)
{
	if (tree == NULL)
	{
		tree = new node(x);
	}
	else if (tree->val > x)
	{
		insert(tree->left, x);
	}
	else if (tree->val < x)
	{
		insert(tree->right, x);
	}
	else if (tree->val == x)
		return ;
}
int ChieuCao(node* t)
{
	if (t == NULL)
		return 0;
	int a = ChieuCao(t->left);
	int b = ChieuCao(t->right);
	if (a > b)
		return a + 1;
	else
		return b + 1;
}
void LNR(node *tree, int k,int &dem,int &bac)
{
	if (tree != NULL)
	{
		if (bac == k)
			dem++;
		else
		{
			bac++;
			int x;
			x = bac;
			LNR(tree->left, k, dem,x);
			x = bac;
			LNR(tree->right, k, dem,x);
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	node* tree = NULL;
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		insert(tree, x);
	}
	int k, bac;
	dem = ChieuCao(tree);
	for (int i = 0; i < dem; i++)
	{
		k = 0,bac=0;
		LNR(tree, i, k,bac);
		cout << "So node muc " << i << " cua cay la: " << k<<endl;
	}

}
