
#include "HV.h"
#include<iostream>
using namespace std;
HV::HV()
{
	canh = 0;
}
HV::~HV()
{}
bool HV::Check()
{
	Point* s = GetCoor();
	double xAB = pow(s[0].x - s[1].x, 2);
	double yAB = pow(s[0].y - s[1].y, 2);
	double xBC = pow(s[1].x - s[2].x, 2);
	double yBC = pow(s[1].y - s[2].y, 2);
	double AB = sqrt(xAB + yAB);
	double BC = sqrt(xBC + yBC);
	if (xAB * xBC + yAB * yBC == 0 && AB == BC)
		return true;
	return false;
}
void HV::Print()
{
	Point* s = GetCoor();
	double xAB = pow(s[0].x - s[1].x, 2);
	double yAB = pow(s[0].y - s[1].y, 2);
	double xBC = pow(s[1].x - s[2].x, 2);
	double yBC = pow(s[1].y - s[2].y, 2);
	double AB = sqrt(xAB + yAB);
	double BC = sqrt(xBC + yBC);
	TuGiac::Print();
	canh = AB;
	cout << "canh hinh vuong la: " << canh;
}