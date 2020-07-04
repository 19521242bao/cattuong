#include<iostream>
#include<string>
#include"ConBo.h"
#include"ConCuu.h"
#include"ConDe.h"
#include"GiaSuc.h"
using namespace std;
int main()
{
	int n;
	GiaSuc *arr[100];
	ConBo a[30];
	ConCuu b[30];
	ConDe c[30];
	int n1, n2, n3;
	cout << "nhap so luong gia suc: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int chon;
		cout << "chon 1 la con bo, chon 2 la con cuu , chon 3 la con de";
		cin >> chon;
		switch (chon)
		{
		case 1:
			arr[i] = new ConBo;
			break;
		case 2:
			arr[i] = new ConCuu;
			break;
		case 3:
			arr[i] = new ConDe;
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		arr[i]->Say();
	}
	int tongsua = 0;
	for (int i = 0; i < n; i++)
	{
		tongsua += arr[i]->GetCon();
	}
	int tongcon = 0;
	for (int i = 0; i < n; i++)
	{
		tongcon += arr[i]->GetSua();
	}
	cout << tongsua << " " << tongcon;
	//for (int i = 0; i < n2; i++)
	//{
	//	b[i].Say();
	//}
	//for (int i = 0; i < n3; i++)
	//	c[i].Say();
	//for (int i = 0; i < n1; i++)
	//{
	//	a[i].print();
	//}
	//for (int i = 0; i < n2; i++)
	//{
	//	b[i].print();
	//}
	//for (int i = 0; i < n3; i++)
	//	c[i].print();
}