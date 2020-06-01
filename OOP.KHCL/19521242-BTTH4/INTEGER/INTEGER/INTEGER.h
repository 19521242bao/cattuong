#pragma once
#include<iostream>
using namespace std;
class INTEGER
{
private:
	int x;
public:
	INTEGER();
	~INTEGER();
	friend istream& operator>>(istream& is, INTEGER& ps);
	friend ostream& operator<<(ostream& os, INTEGER ps);
	INTEGER operator+ (INTEGER a);
	INTEGER operator- (INTEGER a);
	INTEGER operator* (INTEGER a);
	INTEGER operator/(INTEGER a);
	INTEGER operator%(INTEGER a);
	void operator++();
	void operator--();
};

