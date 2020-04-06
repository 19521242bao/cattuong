#pragma once
class soPhuc
{
private:
	float thuc;
	float ao;
public:
	void Nhap();
	void Xuat();
	float DinhGT();
	soPhuc CongSP(soPhuc a);
	soPhuc TruSP(soPhuc a);
	soPhuc ChiaSP(soPhuc a);
	soPhuc NhanSP(soPhuc a);
};


