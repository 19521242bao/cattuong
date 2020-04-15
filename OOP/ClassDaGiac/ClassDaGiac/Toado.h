#pragma once
class Toado
{
private:
	int hdo;
	int tdo;
public:
	Toado();
	void Nhap();
	void Xuat();
	void TinhTien(int x, int y);
	~Toado();
	int getHD();
	int getTD();
	void setTD(const Toado&);
	double Distance(const Toado&);


};
