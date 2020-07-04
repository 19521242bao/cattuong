// BinaryTree1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct node
{
	int data;
	node* pleft;
	node* pright;
};
node*insert(node*t,int x)
{
	if (t == NULL)
	{
		node* p = new node;
		p->data = x;
		p->pleft = NULL;
		p->pright = NULL;
		return p;
	}
	else
	{
		if (x < t->data)
		{
			t->pleft=insert(t->pleft, x);
		}
		else
		{
			t->pright = insert(t->pright, x);
		}
		return t;
	}
}
void printTree(node* t) {
	if (t != NULL) {
		printTree(t->pleft);
		cout << t->data << " ";
		printTree(t->pright);
	}
}
int main() {
	int n, x;
	cin >> n;
	node* t = NULL;
	for (int i = 0; i < n; i++) {
		cin >> x;
		t = insert(t, x);
	}
	printTree(t);
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
