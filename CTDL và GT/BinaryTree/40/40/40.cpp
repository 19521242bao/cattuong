// 40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isPrime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
struct node {
	int val;
	node* l, * r;
	bool flag;
	node(int x)
	{
		val = x;
		l = NULL;
		r = NULL;
		if (isPrime(x) == true)
			flag = true;
		else
			flag = false;
	}
};
void insert(node*& tree, int x,int &countP)

{
	if (tree == NULL)
	{
		tree = new node(x);
		if (tree->flag == true)
			countP++;
	}
	else if (tree->val > x)
		insert(tree->l, x, countP);
	else if (tree->val, x)
		insert(tree->r, x, countP);
}
void LNR(node* tree, int& dem)
{
	if (tree != NULL)
	{
		LNR(tree->l, dem);
		if (tree->flag == true && dem > 0)
			dem--;
		else
			cout << tree->val<<" ";
		LNR(tree->r, dem);
	}
}

int main()
{
	node* tree = NULL;
	int x;
	int countP = 0;
	int dem = 0;
	while (1)
	{
		cin >> x;
		if (x == 0)
			break;
		insert(tree, x, countP);
		dem++;
	}
	int n;
	cin >> n;
	if (countP==dem&&dem==n )
	{
		cout << "Not found tree!";
		return 0;
	}
	LNR(tree, n);
	
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
