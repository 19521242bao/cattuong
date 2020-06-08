#pragma once
#include<iostream>
#include<string>
using namespace std;
class GiaSuc
{
private:
	string tiengkeu;
	int SoLitSua, SoCon;
public:
	GiaSuc();
	GiaSuc(int a, int b, string c);
	 ~GiaSuc();
	void SetSua(int a);
	void SetCon(int b);
	void SetTieng( string c);
	int GetSua() { return SoLitSua; }
	int GetCon() { return SoCon; }
	string GetTieng() { return tiengkeu; }
	void Say();
	 void Print();
};

