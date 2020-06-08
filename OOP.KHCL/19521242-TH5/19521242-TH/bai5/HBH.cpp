
#include "HBH.h"
#include<iostream>
#include"TuGiac.h"
using namespace std;
HBH::HBH()
{
	dai = 0;
	rong = 0;
	cao = 0;
}
HBH::~HBH()
{}
bool HBH::Check()
{
	Point* s = GetCoor();
	double xAB = pow(s[0].x - s[1].x, 2);
	double yAB = pow(s[0].y - s[1].y, 2);
	double xCD = pow(s[2].x - s[3].x, 2);
	double yCD = pow(s[2].y - s[3].y, 2);
	double AB = sqrt(xAB + yAB);
	double CD = sqrt(xCD + yCD);
	if ( xAB*yCD==xCD*yAB&&AB==CD)
		return true;
	return false;
}
void HBH::Print()
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
	cout << "chieu dai: " << dai<<endl;
	cout << "chieu rong: " << rong<<endl;
	cout << "chieu cao: " << sqrt(dai * dai - rong * rong)<<endl;
}