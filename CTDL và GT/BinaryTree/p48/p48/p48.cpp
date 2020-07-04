// p48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct node {
	int val,fre;
	node* left, * right;
	node(int x) {
		val = x;
		left = right = NULL;
		fre = 0;
	}
};
void add_node(node*& root, int x)
{
	if (root == NULL) root = new node(x);
	else if (x < root->val)add_node(root->left, x);
	else if (x > root->val)add_node(root->right, x);
	else root->fre++;
}
int  LNR(node* root)
{
	int max1 = root->val;
	while (root!= NULL)
	{
		max1 = root->val;
		root=root->right;
	}
	return max1;

}
void xoa(node*& root)
{
	if (root->right != NULL)
		xoa(root->right);
	if (root->right == NULL)
	{
		if (root->fre > 0)
		{
			root->fre--;
			return;
		}
		root = root->left;
	}
}
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x;
	node* root = NULL;
	int max_value = 0;
	char s;

	while (1)
	{
		cin >> s;

		if (s == 'E')
			break;
		
		else
		{
			if (s == 'U')
			{
				cin >> x;
				add_node(root, x);
			}
			else
			{
				if (root == NULL)
					cout << "NULL" << endl;
				else
				{
					max_value=LNR(root);
					cout << max_value << endl;
					xoa(root);
				}
			}
		}
	}
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
