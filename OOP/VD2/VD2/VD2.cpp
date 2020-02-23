// VD2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
class NhanVienSuaOngNuoc
{
	private:
		string hoten;
		int tuoi;
		string gioitinh;
		string diachi;
		string soDT;
		float cannang;
		float chieucao;
		float sogio;
	public:
			void Nhap();
			void Xuat();
			float tinhTienLuong();
			NhanVienSuaOngNuoc();
			~NhanVienSuaOngNuoc();

};
// nhap thong tin sua ong uoc
void NhanVienSuaOngNuoc::Nhap()
{
	fflush(stdin);
	cout << "\n nhap ho ten: ";
	getline(cin, hoten);
	fflush(stdin);
	getline(cin, hoten);
	fflush(stdin);
	cout << "\n nhap tuoi: ";
	cin >> tuoi;
	fflush(stdin);
	cout << "\n nhap gioi tinh: ";
	getline(cin, gioitinh);
	fflush(stdin);
	getline(cin, gioitinh);
	cout << "\n nhap dia chi: ";
	getline(cin, diachi);
	cout << "\n nhap so dien thoai: ";
	getline(cin, soDT);
	cout << "\n nhap can nang: ";
	cin >> cannang;
	cout << "\n nhap chieu cao:";
	cin >> chieucao;
	cout << "nhap so gio sua";
	cin >> sogio;
	
}
float NhanVienSuaOngNuoc::tinhTienLuong()
{
	return sogio * 50000;
}
void NhanVienSuaOngNuoc::Xuat()
{
	cout << "\n ho ten la: " << hoten;
	cout << "\n tuoi la: " << tuoi;
	cout << "\n gioi tinh la: " << gioitinh;
	cout << "\n dia chi la:" << diachi;
	cout << "\n so dien thoai la:" << soDT;
	cout << "\n can nang la:" << cannang;
	cout << "\n chieu cao la" << chieucao;
	
}//ham tao
NhanVienSuaOngNuoc::NhanVienSuaOngNuoc()
{

}//ham huy
NhanVienSuaOngNuoc::~NhanVienSuaOngNuoc()
{

}
//class nhan vien ban hang
class NhanVienGiaoHang
{
private:
	string hoten;
	int tuoi;
	string gioitinh;
	string diachi;
	string soDT;
	float cannang;
	float chieucao;
	float sohang;
public:
	void Nhap();
	void Xuat();
	float tinhTienLuong();
	NhanVienGiaoHang();
	~NhanVienGiaoHang();

};
// nhap thong tin sua ong uoc
void NhanVienGiaoHang::Nhap()
{
	fflush(stdin);
	cout << "\n nhap ho ten: ";
	getline(cin, hoten);
	fflush(stdin);
	getline(cin, hoten);
	fflush(stdin);
	cout << "\n nhap tuoi: ";
	cin >> tuoi;
	fflush(stdin);
	cout << "\n nhap gioi tinh: ";
	getline(cin, gioitinh);
	fflush(stdin);
	getline(cin, gioitinh);
	cout << "\n nhap dia chi: ";
	getline(cin, diachi);
	cout << "\n nhap so dien thoai: ";
	getline(cin, soDT);
	cout << "\n nhap can nang: ";
	cin >> cannang;
	cout << "\n nhap chieu cao:";
	cin >> chieucao;
	cout << "\n nhap so hang";
		cin >> sohang;

}
float NhanVienGiaoHang::tinhTienLuong()
{
	return sohang * 50000;
}
void NhanVienGiaoHang::Xuat()
{
	cout << "\n ho ten la: " << hoten;
	cout << "\n tuoi la: " << tuoi;
	cout << "\n gioi tinh la: " << gioitinh;
	cout << "\n dia chi la:" << diachi;
	cout << "\n so dien thoai la:" << soDT;
	cout << "\n can nang la:" << cannang;
	cout << "\n chieu cao la" << chieucao;

}//ham tao
NhanVienGiaoHang::NhanVienGiaoHang()
{

}//ham huy
NhanVienGiaoHang::~NhanVienGiaoHang()
{

}
//ham class xe om cong nghe
class xeOmCongNghe
{
private:
	string hoten;
	int tuoi;
	string gioitinh;
	string diachi;
	string soDT;
	float cannang;
	float chieucao;
	float socayso;
public:
	void Nhap();
	void Xuat();
	float tinhTienLuong();
	xeOmCongNghe();
	~xeOmCongNghe();

};
// nhap thong tin sua ong uoc
void xeOmCongNghe::Nhap()
{
	fflush(stdin);
	cout << "\n nhap ho ten: ";
	getline(cin, hoten);
	fflush(stdin);
	getline(cin, hoten);
	fflush(stdin);
	cout << "\n nhap tuoi: ";
	cin >> tuoi;
	fflush(stdin);
	cout << "\n nhap gioi tinh: ";
	getline(cin, gioitinh);
	fflush(stdin);
	getline(cin, gioitinh);
	cout << "\n nhap dia chi: ";
	getline(cin, diachi);
	cout << "\n nhap so dien thoai: ";
	getline(cin, soDT);
	cout << "\n nhap can nang: ";
	cin >> cannang;
	cout << "\n nhap chieu cao:";
	cin >> chieucao;
	cout << "\n nhap so cay so";
	cin >> socayso;
}
float xeOmCongNghe::tinhTienLuong()
{
	return socayso * 10000;
}
void xeOmCongNghe::Xuat()
{
	cout << "\n ho ten la: " << hoten;
	cout << "\n tuoi la: " << tuoi;
	cout << "\n gioi tinh la: " << gioitinh;
	cout << "\n dia chi la:" << diachi;
	cout << "\n so dien thoai la:" << soDT;
	cout << "\n can nang la:" << cannang;
	cout << "\n chieu cao la" << chieucao;
	
}//ham tao
xeOmCongNghe::xeOmCongNghe()
{

}//ham huy
xeOmCongNghe::~xeOmCongNghe()
{

}
int main()
{
	NhanVienGiaoHang nhanvien2;
	NhanVienSuaOngNuoc nhanvien1;
	xeOmCongNghe nhanvien3;
	cout << "\n nhap thong tin tho sua ong nuoc";
	nhanvien1.Nhap();
	cout << "\n nhap thong nhan vien giao hang";
	nhanvien2.Nhap();
	cout << "\n nhap thong tin tai xe xe om cong nghe";
	nhanvien3.Nhap();
	nhanvien1.Xuat();
	cout <<"\n tien luong tho sua ong nuoc la \n" <<nhanvien1.tinhTienLuong();
	nhanvien2.Xuat();
	cout << "\n tien luong nhan vien giao hang la \n"<<nhanvien2.tinhTienLuong();
	nhanvien3.Xuat();
	cout <<"\n tien luong xe om cong nghe la \n"<< nhanvien3.tinhTienLuong();

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
