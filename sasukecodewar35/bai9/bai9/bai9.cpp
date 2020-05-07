// bai9.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	for (int i = 1; i <= b; i++)
		s *= a;
	return s;
}
string solve(int a, int b)
{
	string s1 = to_string(a);
	string s2 = to_string(b);
	int b1 = 0;
	string s = "";
	int i = 0, j = 0;
	int n = s1.length();
	int m = s2.length();
	while (s.length() != m + n)
	{
		if (s1[i] > s2[j])
		{
			s += s1[i];
			if (i == n - 1)
			{
				for (int k = j; k < m; k++)
					s += s2[k];
			}
			else
				i++;
		}
		else
		{
			s += s2[j];
			if (j == m - 1)
			{
				for (int k = i; k < n; k++)
					s += s1[k];
			}
			else
				j++;
		}
	}
	return s;
}
long long maxNumber(int a, int b)
{
	string s = solve(a, b);
	string s3 = solve(b, a);
	if (s3 > s)
		s = s3;
	int n = s.size();
	long long sum = 0,c=0;
	for (int i = 0; i < n; i++)
	{
		c = s[i] - '0';
		sum += c * pow1(10, n -i - 1);

	}

	return sum;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << maxNumber(a, b);
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
