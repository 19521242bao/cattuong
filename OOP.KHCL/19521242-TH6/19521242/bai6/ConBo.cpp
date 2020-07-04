#include<iostream>
#include<random>
#include<string>
#include<time.h>
#include"ConBo.h"
using namespace std;
ConBo::ConBo()
{
	SetCon(rand() % 10 + 1);
	SetSua(rand() % 20 + 1);
	SetTieng(tiengkeu);
}
ConBo::~ConBo(){}
void ConBo::print()
{
	cout << "Con Bo nay ";
	GiaSuc::Print();
}
void ConBo::Say()
{
	cout << tiengkeu << endl;
}

