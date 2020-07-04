#include<iostream>
using namespace std;
struct node {
	long long val, bac;
	node* l, * r;
	node(long long x, int dem) {
		val = x;
		r = l = NULL;
		bac = dem;
	}
};
void LNR1(node* tree)
{
	if (tree != NULL)
	{
		LNR1(tree->l);
		cout << tree->val<<" ";
		LNR1(tree->r);

	}

}
void LNR(node* tree, int x)
{
	if (tree != NULL)
	{
		LNR(tree->l, x);
		if (tree->val == x)
		{
			int dem = 0;
			if (tree->l != NULL)
				dem++;
			if (tree->r != NULL)
				dem++;
			cout << "Node " << x << " co bac la " << dem << "." << endl;
		}
		LNR(tree->r, x);

	}

}
void insert(node*& tree, long long x, int& dem) {
	if (tree == NULL)
		tree = new node(x, dem);

	else if (tree->val > x)
	{
		dem = tree->bac + 1;
		insert(tree->l, x, dem);
	}
	else if (tree->val < x)
	{
		dem = tree->bac + 1;
		insert(tree->r, x, dem);

	}
}
int main() {
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	node* tree_fre = NULL;
	int n = 0;
	long long x;
	int dem = 0, dem1 = 0;
	node* p = NULL;
	while (1) {
		cin >> x;
		if (x == 0)
			break;
		insert(tree_fre, x, dem);
	}
	LNR1(tree_fre);
	while (1)
	{
		cin >> x;
		if (x == 0)
			break;
		LNR(tree_fre, x);
	}



}