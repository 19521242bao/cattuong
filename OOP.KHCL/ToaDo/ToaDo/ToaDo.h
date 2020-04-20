#pragma once
#pragma once
class ToaDo
{
private:
	int hdo;
	int tdo;
public:
	ToaDo();
	ToaDo(const ToaDo&);
	ToaDo(int x, int y );
	void Nhap();
	void Xuat();
	int getHD();
	int getTD();
	void setToaDo(int x, int y);
	void TinhTien(int x, int y);
	double Distance(const ToaDo&);
	~ToaDo();


};

