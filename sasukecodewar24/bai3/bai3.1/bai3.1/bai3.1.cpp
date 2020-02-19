// bai3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int pow1(int a, int b)
{
	if (b == 0)
		return 1;
	int s = 1;
	for (int i = 1; i <= b; i++)
		s *= a;
	return s;
}
int tong(int n)
{
	int s = 0;
	for (int i = 0; i <= n; i++)
		s += 8 * pow1(10, i);
	return s;
}
int solve1(int n)
{
	int s;
	int a = 0;
	int b = log10(n);
	for (int i = b; i >= 0; i--)
	{
		s = n / pow1(10, i);
		if (s % 2 == 0)
		{
			a = s * pow1(10, i);
			n = n - a;
			continue;
			
		}
		else
		{
			s = s - s % 2;
			a += s * pow1(10, i) + tong(i-1);
			break;
		}
	}
	return a;
}
int superEvenNumber(int n)
{
	int s;
	int a = 0;
	n = solve1(n);
	int b = log10(n);
	for (int i = b; i >= 0; i--)
	{
		s = n / pow1(10, i);
		s = s / 2;
		a += s * pow1(5, i);
		n = n - s * 2*pow1(10, i);

	}
	return a;
}
int main()
{
	int n;
	cin >> n;
	cout << superEvenNumber(n);
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
