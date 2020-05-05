#pragma once
class DaThuc
{
private:
	int n;
	// so bac da thuc
	float a[100];
	//he so bậc của đa thức
public:
	DaThuc();
	DaThuc(const DaThuc&);
	void Nhap();
	void Xuat();
	void SetDaThuc(const DaThuc&);
	int GetHS(int x);//a là bậc của hệ số muốn lấy
	DaThuc CongDaThuc(const DaThuc&);
	DaThuc TruDaThuc(const DaThuc&);
	DaThuc NhanDaThuc(const DaThuc&);
	DaThuc DaoHam();
	DaThuc NgHam(int c);


};

