// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;
long long pow1(long long a, long long b)
{
	if (b == 0)
		return 1;
	long long s = 1;
	for (int i = 1;i<=b; i++)
		s *= a;
	return s;
}
long long convertNumberMax(long long n)
{
	string s = to_string(n);
	int m = s.size();
	int max1 = -1;
	for (int i = 0; i < m; i++)
	{
		max1 = max(max1, s[i] - '0');
	}
	string s1;
	int a;
	int c = 0;
	for (int i = 0; i < m; i++)
	{
		c = s[i] - '0';
		if (max1 != c)
		{
			a = i;
			break;
		}
	}
	long long s3 = 0;
	
	for (int i = 0; i < m; i++)
	{
		if (i != a)
		{
			c = s[i]-'0';
			s3 += c * pow1(10, m - i - 1);
		}
		else
		{
			s3 += max1 * pow1(10, m - i - 1);
		}
	}
	return s3;
}
int main()
{
	long long n;
	cin >> n;
	cout << convertNumberMax(n);

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
