#pragma once
#include<iostream>
#include<string>
using namespace std;
class CString
{
private:
	string s;
public:
	CString();
	~CString();
	friend istream& operator>>(istream& is, CString& ps);
	friend ostream& operator<<(ostream& os, CString& ps);
	CString operator+(CString a);
	void operator=(CString a);
	bool operator>(CString a);
	bool operator<(CString a);
	bool operator>=(CString a);
	bool operator<=(CString a);
	bool operator==(CString a);
	bool operator!=(CString a);

};

