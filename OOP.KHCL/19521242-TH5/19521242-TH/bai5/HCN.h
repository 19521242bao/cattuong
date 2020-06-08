#pragma once
#include"TuGiac.h"
class HCN :
	public  TuGiac
{
private:
	double dai, rong;
public:
	HCN();
	~HCN();
	bool Check();
	void Print();
};