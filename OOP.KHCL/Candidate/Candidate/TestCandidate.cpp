#include<iostream>
#include "TestCandidate.h"
#include "Candidate.h"
using namespace std;
void TestCandidate::NhapTS(int n)
{
	
	for (int i = 0; i < n; i++)
	{
		cout<< " nhap thi sinh thu "<<i+1<< "la \n"5;
		ThiSinh[i].Nhap();
	}
		
}
void TestCandidate::TVmore15(int n)
{
	float diemTV;
	for (int i = 0; i < n; i++)
	{
		diemTV=ThiSinh[i].ToanVanAnh();
		if (diemTV > 15)
			
			ThiSinh[i].Xuat();
	}
}