// demnodela.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
struct Node
{
	int val;
	Node* left = NULL, * right = NULL;
	Node(int x)
	{
		val = x;
	}
};

struct Node_queue {
	Node* data;
	Node_queue* pNext;
	Node_queue(Node* x) {
		data = x;
		pNext = NULL;
	}
};

struct queuei {
	Node_queue* qHead = NULL, * qTail = NULL;
};

void push_queue(queuei*& q, Node_queue* p) {
	if (q->qHead == NULL) {
		q->qHead = q->qTail = p;
	}
	else {
		q->qTail->pNext = p;
		q->qTail = p;
	}
}

void pop_queue(queuei*& q) {
	if (q->qHead == q->qTail) {
		delete(q->qHead);
		q->qHead = q->qTail = NULL;
	}

	else {
		Node_queue* t = q->qHead->pNext;
		delete q->qHead;
		q->qHead = t;
	}
}

void add(Node*& a, int x)
{
	if (a == NULL)
	{
		a = new Node(x);
		return;
	}
	else if (x < a->val)
		add(a->left, x);
	else if (x > a->val)
		add(a->right, x);
}



int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	Node* root = NULL;
	int op;
	do {
		cin >> op;
		if (op == 0)
			break;
		add(root, op);
	} while (true);

	if (root != NULL) {
		queuei* q = new queuei;
		Node_queue* p = new Node_queue(root);
		push_queue(q, p);
		while (q->qHead) {
			if (q->qHead->data != NULL) {
				cout << q->qHead->data->val << " ";
				Node_queue* a = new Node_queue(q->qHead->data->left), * b = new Node_queue(q->qHead->data->right);
				push_queue(q, a);
				push_queue(q, b);
			}
			pop_queue(q);
		}
	}
	return 0;
}