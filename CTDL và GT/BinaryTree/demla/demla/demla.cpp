
// BinaryTree2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct node {
	int data;
	node* left;
	node* right;
	node(int x)
	{
		data = x;
		left = right = NULL;
	}
};
void insert(node* &t, int x) {
	if (t == NULL) {
		t = new node(x);
		return;
	}
	else {
		if (x < t->data) {
			insert(t->left, x);
		}
		if(x>t->data )
		{
			 insert(t->right, x);
		}
	}

}
bool IsLeafNode(node* l)
{
	return(l->left == NULL && l->right == NULL);
}
int countLeafNode(node* t)
{
	if (t == NULL) return 0;
	if (IsLeafNode(t)) return 1;
	return countLeafNode(t->left) + countLeafNode(t->right);
}
int main() {
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	int  temp;
	node* t = NULL;
	do{
		cin >> temp;
		if (temp == 0)
			break;
		insert(t, temp);
	} while (true);
	cout << countLeafNode(t);

	return 0;
}