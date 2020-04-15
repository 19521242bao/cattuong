#pragma once
#pragma once
#include "Toado.h"
class DaGiac
{
private:
	int sodiem;
	Toado *p;
public:
	DaGiac();
	DaGiac( const DaGiac & );
	~DaGiac();
	void Nhap();
	void Xuat();
	double Chuvi();
	double CanhMax();


};

