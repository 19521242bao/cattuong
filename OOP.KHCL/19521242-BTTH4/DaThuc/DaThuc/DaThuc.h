#pragma once
#include <iostream>
using namespace std;
class DaThuc
{
private:
	int bac;
	double* heso;
public:
	DaThuc();
	DaThuc(const DaThuc&);
	friend istream& operator>>(istream&, DaThuc&);
	friend ostream& operator<<(ostream&, DaThuc&);
	bool operator==(const DaThuc&);
	bool operator>(const DaThuc&);
	bool operator<(const DaThuc&);
	DaThuc operator+(const DaThuc&);
	DaThuc operator-(const DaThuc&);
	DaThuc operator*(const DaThuc&);
	DaThuc operator++();//tinh nguyen ham
	DaThuc operator--();//tinh dao ham
	
};