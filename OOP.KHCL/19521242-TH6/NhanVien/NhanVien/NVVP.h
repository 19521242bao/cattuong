#pragma once
#include<string>
using namespace std;
#pragma once
class NVVP {
private:
	string hoten;
	string date;
	int ngaylamviec;
public:
	friend istream& operator >>(istream& is, NVVP& ps);
	friend ostream& operator<<(ostream& os, NVVP ps);
	int luong();

};

