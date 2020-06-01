#include<iostream>
#include"CVector.h"
using namespace std;
#pragma once
class CVector;
class Maxtrix
{
private:
	int n;
	int m;
	double **arr;
public:
	Maxtrix();
	/*~Maxtrix();*/
	friend istream& operator >>(istream& is, Maxtrix& mt);
	friend ostream& operator <<(ostream& os, Maxtrix mt);
	Maxtrix operator +(Maxtrix a);
	Maxtrix operator -(Maxtrix a);
	Maxtrix operator*(Maxtrix a);
	Maxtrix operator*(int a);
	friend CVector operator*(const Maxtrix& a, const CVector& b);

};

