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
		if (s1[i] >= s2[j])
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
	}
	return s;
}
long long maxNumber(int a, int b)
{
	string s = solve(a, b);
	string s3 = solve(b, a);
	int n = s.size();
	long long sum = 0, c = 0;
	for (int i = 0; i < n; i++)
	{
		c = s[i] - '0';
		sum += c * pow1(10, n - i - 1);

	}
	long long sum1 = 0;
	for (int i = 0; i < n; i++)
	{
		c = s3[i] - '0';
		sum1 += c * pow1(10, n - i - 1);

	}
	return max(sum1, sum);

	return sum;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << maxNumber(a, b);
}
//test cho:5988329 6983522