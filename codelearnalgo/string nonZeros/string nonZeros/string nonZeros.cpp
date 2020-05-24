
// string nonZeros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int solve1(string s)
{
	int n = s.length();
	int sum = 0;
	int c;
	for (int i = 0; i < n; i++)
	{
		c = s[i] - '0';
		if (c != 0)
		{
			sum = sum * 10 + c % 10;
		}
	}
	return sum;
}
string nonZeros(int v, int a)
{
	string s = "NO";
	int sum = v + a;
	string s3 = to_string(sum);
	string s1 = to_string(v);
	string s2 = to_string(a);
	int sum1 = solve1(s1) + solve1(s2);
	int sum2 = solve1(s3);
	if (sum2 == sum1)
	{
		s = "YES";
	}
	return s;
}
int main()
{
	int v, a;
	cin >> v >> a;
	cout << nonZeros(v, a);
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
