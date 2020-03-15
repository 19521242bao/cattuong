// 2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
struct hocSinh {
	string hoten;
	float diemToan;
	float  diemVan;
};
void nhapHocSinh(hocSinh &a){
	fflush(stdin);
	string s;
	fflush(stdin);
	cout << "\n nhap ten hoc sinh \n";
	getline(cin, s);
	fflush(stdin);
	getline(cin, s);
	
	a.hoten = s;
	cout << "\n nhap diem Toan cua hoc sinh\n";
	cin >> a.diemToan;
	cout << "\n nhap diem Van cua hoc sinh\n";
	cin >> a.diemVan;
	fflush(stdin);
}
float diemTB(hocSinh a) {
	return (a.diemToan + a.diemVan) / 2.00;
}
void xuatHocsinh(hocSinh a)
{
	cout << "ho ten hoc sinh la " << a.hoten << endl;
	cout << "diem toan cua hoc sinh la " << a.diemToan << endl;
	cout << "diem van cua hoc sinh la " << a.diemVan << endl;
	float c = diemTB(a);
	cout << "diem trung binh cua hoc sinh do la " << c << endl;
}
int main()
{
	hocSinh a[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		nhapHocSinh(a[i]);
		fflush(stdin);
	}
	for (int i = 0; i < n; i++)
		xuatHocsinh(a[i]);
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
