// bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct  phanSo {
	int tuso;
	int mauso;
};
void nhapPhanso(phanSo &a)
{
	cout << "\nnhap tu so" << endl;
	cin >> a.tuso;
	cout << "\nnhap mau so" << endl;
	cin >> a.mauso;
	cout << endl;
	
}
int ucln(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
void rutGon(int &a, int &b)
{
	int c = ucln(a, b);
	a = a / c;
	b = b / c;
}
phanSo congPhanso(phanSo a, phanSo b) {
	phanSo c;
	c.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
	c.mauso = a.mauso * b.mauso;
	c.tuso /= ucln(c.tuso, c.mauso);
	c.mauso/= ucln(c.tuso, c.mauso);
	return c;
}
phanSo truPhanso(phanSo a, phanSo b) {
	phanSo c;
	c.tuso = a.tuso * b.mauso - a.mauso * b.tuso;
	c.mauso = a.mauso * b.mauso;
	c.tuso /= ucln(c.tuso, c.mauso);
	c.mauso /= ucln(c.tuso, c.mauso);
	return c;
}
phanSo nhanPhanso(phanSo a, phanSo b) {
	phanSo c;
	c.tuso = a.tuso * b.tuso;
	c.mauso = a.mauso * b.mauso;
	c.tuso /= ucln(c.tuso, c.mauso);
	c.mauso /= ucln(c.tuso, c.mauso);
	return c;
}
phanSo chiaPhanso(phanSo a, phanSo b) {
	phanSo c;
	c.tuso = a.tuso * b.mauso;
	c.mauso = a.mauso * b.tuso;
	c.tuso /= ucln(c.tuso, c.mauso);
	c.mauso /= ucln(c.tuso, c.mauso);
	return c;
}
phanSo soSanh(phanSo a, phanSo b)
{
	if (a.tuso * b.mauso - a.mauso * b.tuso > 0)
		return a;
	return b;
}
void xuatPhanso(phanSo a) {
	cout << "phan so can tim la " << a.tuso << "/" << a.mauso<<endl;
}
int main()
{
	phanSo a, b, c, d, e, f, g;
	nhapPhanso(a);
	nhapPhanso(b);
	c = congPhanso(a, b);
	xuatPhanso(c);
	d = truPhanso(a, b);
	xuatPhanso(d);
	e = nhanPhanso(a, b);
	xuatPhanso(e);
	f = chiaPhanso(a, b);
	xuatPhanso(f);
	g = soSanh(a, b);
	xuatPhanso(g);
	return 0;
}
