
// 45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iostream>
#include <algorithm>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};
int LeftOf(int info, node* root)
{
	return info < root->data;
}
int RightOf(int info, node* root)
{
	return info > root->data;
}
node* InsertNode(node* root, int info)
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
	{
		root->left = InsertNode(root->left, info);
	}
	else
		if (RightOf(info, root))
			root->right = InsertNode(root->right, info);
	return root;
}
int height(node* root)
{
	if (root == NULL)
		return 0;
	return 1 + max(height(root->left), height(root->right));
}
void Solve(node*tree)
{
	
}




int main()
{
	int n, h = 0;
	cin >> n;
	node* root = NULL;
	int info;
	for (int i = 0; i < n; i++)
	{
		cin >> info;
		root = InsertNode(root, info);
	}
	h = height(root);
	cout << "Chieu cao cua cay la: " << h;

}