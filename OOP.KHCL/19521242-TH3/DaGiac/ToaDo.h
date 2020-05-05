#pragma once
#pragma once
class ToaDo
{
private:
	float hdo;
	float tdo;
public:
	ToaDo();
	ToaDo(const ToaDo&);
	ToaDo(int x, int y);
	void Nhap();
	void Xuat();
	int getHD();
	int getTD();
	void setToaDo(int x, int y);
	void TinhTien(int x, int y);
	double Distance(const ToaDo&);
	void Quay(float rad);
	void Size(float k);
	~ToaDo();


};
