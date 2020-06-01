#pragma once
#include<iostream>
using namespace std;
class MYINT
{
private:
	int x;
public:
	MYINT();
	~MYINT();
	friend istream& operator>>(istream& is, MYINT& ps);
	friend ostream& operator<<(ostream& os, MYINT ps);
	MYINT operator+ (MYINT a);
	MYINT operator- (MYINT a);
	MYINT operator* (MYINT a);
	MYINT operator/(MYINT a);
	
	void operator++();
	void operator--();
};

