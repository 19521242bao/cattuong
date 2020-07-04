#include <iostream>

using namespace std;


struct node {
	int data;
	node* left;
	node* right;
};

int kiemTraNhanhTrai(node* root, int x)
{
	if (root->data > x)
		return 1;
	return 0;
}
int kiemTraNhanhPhai(node* root, int x)
{
	if (root->data < x)
		return 1;
	return 0;
}

void inDanhSachGiamDan(node* TREE) {
	if (TREE != NULL)
	{
		inDanhSachGiamDan(TREE->right);
		cout << TREE->data << " ";
		inDanhSachGiamDan(TREE->left);
	}
}

string chuyenNhiPhan(int x)
{
	string s = "";
	int k = 0;
	while (x != 0)
	{
		int s1 = x / 2;
		k = x - s1 * 2;
		s += (char)(48+k);
		x /= 2;
	}
	return s;
}
bool kiemTraDoiXung(string s)
{
	int n = s.length();
	for (int i = 0; i < n / 2; i++)
		if (s[i] != s[n - i - 1])
			return false;
	return true;
}
void demSoChuoiDoiXung(node* TREE, int& cnt)
{
	if (TREE != NULL)
	{
		demSoChuoiDoiXung(TREE->left, cnt);
		string s = chuyenNhiPhan(TREE->data);
		if (kiemTraDoiXung(s) == true)
			cnt++;
		demSoChuoiDoiXung(TREE->right, cnt);
	}
}

node* themPhanTuVaoCay(node*& root, int x)
{
	if (root == NULL)
	{
		root = new node;
		root->data = x;
		root->left = NULL;
		root->right = NULL;
	}
	else
	{
		if (root->data > x)
			return themPhanTuVaoCay(root->left, x);
		else
			return themPhanTuVaoCay(root->right, x);
	}
}

int main() {
	node* TREE = NULL;
	int x, cnt = 0;
	while (cin>>x) {
		if (x == 0) {
			inDanhSachGiamDan(TREE);
			cout << endl;
			demSoChuoiDoiXung(TREE, cnt);
			cout << "Co " << cnt << " node thoa de bai." << endl;
			break;
		}
		else
			themPhanTuVaoCay(TREE, x);
	}
}