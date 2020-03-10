// bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<math.h>
#include<functional>
#include<algorithm>
using namespace std;
int pow1(int a, int b)
{
	if (b == 0)
		return 1;
	long long  s = 1;
	for (int i = 1; i <= b; i++)
		s *= a;
	return s;
}
int getNumber(string s)
{
	int b = 0;
	int a = s.length() - 1;
	for (int i = 0; i <= a; i++)
	{
		s[i] = s[i] - '0';
		b += s[i] * pow1(10, a-i);
		
	}
	return b;
}
int getDay(int a, std::string n)
{
	int sum = getNumber(n);
	sum /= a;
	float  b;
	b = log10(sum + 1) / log10(2);
	return b;

}
int main()
{
	int n;
	string s;
	getline(cin, s);
	cin >> n;
	cout << getDay(n, s);
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
