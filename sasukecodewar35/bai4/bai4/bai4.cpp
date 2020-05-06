
// bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;
long long pow1(long long a, long long b)
{
	if (b == 0)
		return 1;
	long long s = 1;
	for (long long i = 1; i <= b; i++)
		s *= a;
	return s;
}
string nLastChar(int a, int b, int n)
{
	vector<long long>f;
	long long b1 = pow1(10, n);
	for (long long i = 0; i <= b; i++)
		f.push_back(1);
	long long s = 1;
	for (long long i = 1; i <= b; i++)
	{
		f[i] = (f[i - 1] * (a%b1)) % b1;
		s = s + f[i];
		s %= b1;
	}
	string s1 = to_string(s);
	long long s2 = s1.length();
	long long s3 = n - s2;
	string s4 = "";
	for (long long i = 0; i < s3; i++)
		s4 += '0';
	s1 = s4 + s1;
	return s1;
}
int main()
{
	int a, b, n;
	cin >> a >> b >> n;
	cout << nLastChar(a, b, n);
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
