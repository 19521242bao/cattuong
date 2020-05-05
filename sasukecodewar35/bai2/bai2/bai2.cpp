
// bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector>
using namespace std;
string jumpingFrog(std::vector<int> a)
{
	string b = "NO";
	int s1 = a[1] - a[0];
	int s2 = a[2] - a[3];
	if(s1==0)
	{
		b = to_string(a[0]);
		return b;
	}
	if (s2 == 0)
	{
			return b;
	}
	double s = s1 * 1.00 / s2;
	if (s == (int)s&&s>0)
	{
		long long result = a[0] + s * a[2];
		b = to_string(result);
	}
	return b;
}
int main()
{
	vector<int>a{123456789,23456789,4567,3982912 };
	cout << jumpingFrog(a);
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
