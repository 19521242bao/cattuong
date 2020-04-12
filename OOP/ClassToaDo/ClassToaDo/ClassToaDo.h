#pragma once
class ClassToaDo
{
private:
	int hdo;
	int tdo;
public:
	ClassToaDo();
	ClassToaDo(const ClassToaDo&);
	void Nhap();
	void Xuat();
	void TinhTien(int x,int y);
	double Distance(const ClassToaDo&);
	~ClassToaDo();


};

