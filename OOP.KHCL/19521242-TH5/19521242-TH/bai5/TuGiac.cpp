
// TuGiac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "TuGiac.h"
using namespace std;
TuGiac::TuGiac()
{
	Point po[4];
	for (int i = 0; i < 4; i++)
	{
		po[i].x = 0;
		po[i].y = 0;
	}
	SetPo(po);
}
TuGiac::TuGiac(Point *po)
{	
	SetPo(po);
}
TuGiac::~TuGiac(){
}
void TuGiac::SetPo(Point poi[4])
{
	for (int i = 0; i < 4; i++)
	{
		po[i].x = poi[i].x;
		po[i].y = poi[i].y;
	}
}
void TuGiac::Set()
{
	
		for (int i = 0; i < 4; i++)
		{
			cout << "nhap toa do diem " << char(65 + i);
			cin >> po[i].x >> po[i].y;
		}
}
void TuGiac::Print()
{
	for (int i = 0; i < 4; i++)
	{
		cout<<"toa do "<<char(65+i)<< po[i].x <<" "<<po[i].y<<endl;
	}
}
