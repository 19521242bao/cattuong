#include "ConCuu.h"
#include<iostream>
#include<random>
#include<string>
#include<time.h>
using namespace std;
ConCuu::ConCuu()
{
	SetCon(rand() % 10 + 1);
	SetSua(rand() % 5 + 1);
	SetTieng(tiengkeu);
}
ConCuu::~ConCuu() {}
void ConCuu::print()
{
	cout << "Con Cuu nay ";
	GiaSuc::Print();
}
void ConCuu::Say()
{
	cout << tiengkeu << endl;
}
