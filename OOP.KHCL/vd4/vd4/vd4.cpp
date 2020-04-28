// vd4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class HinhChuNhat
{
	
	private:
			float dai;
			float rong;
	public:
		HinhChuNhat();
		HinhChuNhat(float , float );
		HinhChuNhat(const HinhChuNhat& );
		~HinhChuNhat();
		void Nhap();
		void Xuat();
		float Area();
		float DienTich(); 
};
HinhChuNhat::HinhChuNhat()
{
	dai = 2;
	rong = 1;
}
HinhChuNhat::HinhChuNhat(float x , float  y)
{
	dai = x;
	rong = y;
}
HinhChuNhat::HinhChuNhat(const HinhChuNhat& a)
{
	dai = a.dai;
	rong = a.rong;
}
HinhChuNhat::~HinhChuNhat()
{
	return;
}
void HinhChuNhat::Nhap() {
	cout << "Nhap chieu rong";
	cin >> rong;
	cout << "Nhap chieu dai";
	cin >> dai;
}
float HinhChuNhat::Area()
{
	return (rong+dai)*2;
}
float HinhChuNhat::DienTich()
{
	return dai * rong;
}
void HinhChuNhat::Xuat() {
	cout << "chieu dai la " << dai;
	cout << "chieu rong la " << rong;
	
}

int main()
{
	HinhChuNhat a,b(3,5),c(b);
	a.Nhap();
	/*a.Area();
	a.DienTich();
	a.Xuat();*/
	b.Xuat();
	c.Xuat();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
