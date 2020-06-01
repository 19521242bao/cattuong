#include<iostream>

using namespace std;
#pragma once
class Maxtrix;
class CVector
{
private:
	double* arr;//gia tri cua tung chieu
	int n;//sochieu
public:
	CVector();
	~CVector();
	bool Check(CVector a);
	friend istream& operator >>(istream& is, CVector& vt);
	int getDim();
	friend ostream& operator <<(ostream& os, CVector vt);
	CVector operator+(CVector a);
	CVector operator-(CVector a);
	double Norm();
	void TinhTien(CVector a);
	friend CVector operator*(const Maxtrix& a, const CVector& b);
};

