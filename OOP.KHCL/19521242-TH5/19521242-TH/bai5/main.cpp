#include<iostream>
#include"TuGiac.h"
#include"HBH.h"
#include"HCN.h"
#include"HT.h"
#include"HV.h"
using namespace std;
int main()
{
	HV a;
	HCN b;
	HBH c;
	HT d;
	int chon;
	bool flag = true;
	do {
		cout << "nhap loai tu giac muon chon: ";
		cin >> chon;
		switch (chon)
		{//1 hv,2hcn,3hbh,4ht
		case 1:
			a.Set();
			if (a.Check() == true)
				a.Print();
			else
				flag = false;
			break;
		case 2:
			b.Set();
			if (b.Check() == true)
				b.Print();
			else
				flag = false;
			break;
		case 3:
			c.Set();
			if (c.Check() == true)
				c.Print();
			else
				flag = false;
			break;
		case 4:
			d.Set();
			if (d.Check() == true)
				d.Print();
			else
				flag = false;
			break;
		}
	} while (flag == false);
}