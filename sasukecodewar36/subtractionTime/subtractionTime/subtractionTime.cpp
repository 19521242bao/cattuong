// subtractionTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int changeNum(string s)
{
	int n = s.length();
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int c = s[i] - '0';
		sum = sum * 10 + c;
	}
	return sum;
}
string subtractionTime(string a, string b)
{
	string gio1 = a.substr(0, 2);
	string gio2 = b.substr(0, 2);
	string phut1 = a.substr(3, 2);
	string phut2 = b.substr(3, 2);
	string giay1 = a.substr(6, 2);
	string giay2 = b.substr(6, 2);
	int s1 = changeNum(gio1)*3600 + changeNum(phut1)*60 + changeNum(giay1);
	int s2 = changeNum(gio2)*3600 + changeNum(phut2)*60 + changeNum(giay2);
	if (s1 > s2)
		s2 += 3600 * 24;
	int s3 = s2 - s1;
	int a1 = s3 / 3600;
	string gio = to_string(a1);
	s3 = s3 - a1 * 3600;
	int b1 = s3 / 60;
	string phut = to_string(b1);
	s3 = s3 - b1 * 60;
	string giay = to_string(s3);
	if (gio.length() == 1)
		gio = '0' + gio;
	if (phut.length() == 1)
		phut = '0' + phut;
	if (giay.length() == 1)
		giay = '0' + giay;
	string Time = gio + ':' + phut + ':' + giay;
	return Time;
	
	
}
int main()
{
	string a, b;
	cin >> a >> b;
	cout << subtractionTime(a, b);
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
