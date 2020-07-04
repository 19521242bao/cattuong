#include "ConDe.h"
#include<iostream>
#include<random>
#include<string>
#include<time.h>
using namespace std;
ConDe::ConDe()
{
	SetCon(rand() % 10 + 1);
	SetSua(rand() % 10 + 1);
	SetTieng(tiengkeu);
}
ConDe::~ConDe() {}
v
oid ConDe::print()
{
	cout << "Con De nay ";
	GiaSuc::Print();
}
void ConDe::Say()
{
	cout << tiengkeu << endl;
}
