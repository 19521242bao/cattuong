// VD1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
class ngaySinh
{
private:
	int ngay, thang, nam;
public:
	void Nhap()
	{
		cout << "Nhap ngay\n";
		cin >> ngay;
		cout << "Nhap thang\n";
		cin >> thang;
		cout << "Nhap nam";
		cin >> nam;
	}
	void Xuat()
	{
		cout << "ngay sinh la " << ngay << "/" << "/" << thang << "/" << nam << endl;
	}
};
class HocSinh
{
	private:
		string Ten;
		float diemToan, diemVan;
		ngaySinh ngaysinh;
	public:
		void Nhap()
		{
			fflush(stdin);
			cout << "\nNhap ho ten";
			getline(cin, Ten);
			cout << "\nNhap diem Toan";
			cin >> diemToan;
			cout << "\nNhap diem Van";
			cin >> this->diemVan;
			ngaysinh.Nhap();
		}
		void Xuat()
		{
			cout << Ten<<endl;
			cout << "Diem Toan la" <<diemToan<<endl;
			cout << "Diem Van la" <<diemVan<< endl;
			ngaysinh.Xuat();
		}
		float TinhTB()
		{
			return (diemToan + diemVan) / 2;
		}
};
int main()
{
	HocSinh hs1;
	hs1.Nhap();
	hs1.Xuat();
	float DTB = hs1.TinhTB();
	cout << "diem trung binh la" << DTB;
	

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
