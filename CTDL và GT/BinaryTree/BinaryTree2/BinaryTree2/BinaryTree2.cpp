
// BinaryTree2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct node {
	int data;
	node* left;
	node* right;
};
node* insert(node* t, int x) {
	if (t == NULL) {
		node* temp = new node;
		temp->data = x;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	}
	else {
		if (x < t->data) {
			t->left = insert(t->left, x);
		}
		else {
			t->right = insert(t->right, x);
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
	int n, temp;
	cin >> n;
	node* t = NULL;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		t = insert(t, temp);
	}
	cout << countLeafNode(t);

	return 0;
}