// GiaSuc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GiaSuc.h"
#include<string>
using namespace std;
GiaSuc::GiaSuc()
{
	SetCon(0);
	SetSua(0);
	SetTieng("");
}
GiaSuc::GiaSuc(int a, int b,string c)
{
	SetCon(b);
	SetSua(a);
	SetTieng(c);
}
GiaSuc::~GiaSuc(){}
void GiaSuc::SetCon(int b)
{
	SoCon = b;
}
void GiaSuc::SetSua(int a)
{
	SoLitSua = a;
}
void GiaSuc::SetTieng(string c)
{
	tiengkeu = c;
}
void GiaSuc::Print()
{
	cout << "Co" << GetCon() << " con , co " << GetSua() << " lit sua  và keu" << GetTieng() << "  trong vuon " << endl;
}
void GiaSuc::Say()
{
	cout << tiengkeu << endl;
}