#include<iostream>
using namespace std;
#pragma once
class sophuc
{
private:
	float thuc;
	float ao;
public:
	sophuc();
	friend istream& operator >> (istream& is, sophuc& ps);
	friend ostream& operator << (ostream& os, sophuc ps);
	sophuc operator + (sophuc a);
	sophuc operator -(sophuc a);
	sophuc operator *(sophuc a);
	sophuc operator /(sophuc a);
	bool operator ==(sophuc a);
	bool operator !=(sophuc a);

};

