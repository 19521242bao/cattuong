#include<iostream>
#include "HCN.h"
using namespace std;
HCN::HCN()
{
	dai = 0;
	rong = 0;
}
HCN::~HCN()
{}
bool HCN::Check()
{
	Point *s = GetCoor();
	double xAB = pow(s[0].x - s[1].x, 2);
	double yAB = pow(s[0].y - s[1].y, 2);
	double xBC = pow(s[1].x - s[2].x, 2);
	double yBC=pow(s[1].y - s[2].y, 2);
	double AB = sqrt(xAB + yAB);
	double BC = sqrt(xBC + yBC);
	if (xAB * xBC + yAB * yBC == 0 && AB != BC)
		return true;
	return false;
}
void HCN::Print()
{
	Point* s = GetCoor();
	double xAB = pow(s[0].x - s[1].x, 2);
	double yAB = pow(s[0].y - s[1].y, 2);
	double xBC = pow(s[1].x - s[2].x, 2);
	double yBC = pow(s[1].y - s[2].y, 2);
	double AB = sqrt(xAB + yAB);
	double BC = sqrt(xBC + yBC);
	if (AB > BC)
	{
		dai = AB;
		rong = BC;
	}
	dai = BC;
	rong = AB;
	TuGiac::Print();
	cout << "chieu dai: "<<dai;
	cout << "chieu rong: "<<rong;
}