#include<iostream>
using namespace std;
struct Node
{
	int val;
	Node* left = NULL, * right = NULL, * next = NULL;
	Node(int x)
	{
		val = x;
	}
};
void add_node(Node*& root, int x)
{
	if (root == NULL) root = new Node(x);
	else if (x < root->val)add_node(root->left, x);
	else if (x > root->val)add_node(root->right, x);
}
struct List
{
	Node* head;
	Node* tail;
};
bool isEmpty(List l)
{
	if (l.head == NULL)
		return true;
	return false;
}
void push(List& l, int x)
{
	if (l.head == NULL) l.head = l.tail = new Node(x);
	else
	{
		Node* p = new Node(x);
		l.tail->next = p;
		l.tail = p;
	}
}
int count(List l)
{
	if (l.head == NULL) return 0;
	if (l.head == l.tail)return 1;
	else
	{
		int count = 0;
		Node* p = l.head;
		while (p != NULL)
		{
			count++;
			p = p->next;
		}
		return count;
	}

}
void pop(List& l)
{
	if (l.head == NULL)
	{
		cout << NULL << endl;
	}
	cout << l.head->val << endl;
	l.head = l.head->next;
}
Node* find(Node* p, int x)
{
	if (p == NULL)return NULL;
	else if (p->val == x)return p;
	else if (x < p->val)find(p->left, x);
	else if (x > p->val)find(p->right, x);
}
void print(Node* root)
{
	List l;
	l.head = l.tail = NULL;
	push(l, root->val);
	Node* k = NULL;
	int i = 1;
	while (l.head != NULL)
	{
		cout << "Deep " << i << ": ";
		int countNode = count(l);
		while (countNode > 0)
		{
			
			k = find(root, l.head->val);
			pop(l);
			if (k->left != NULL)push(l, k->left->val);
			if (k->right != NULL)push(l, k->right->val);
			countNode--;
		}
		cout << "\n";
		i++;
	}
}
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	Node* root = NULL;
	int x;
	while (cin >> x && x != 0)
		add_node(root, x);
	print(root);
}