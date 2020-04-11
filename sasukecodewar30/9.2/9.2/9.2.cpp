

// 9.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
long long demSoChia(long long n, long long b)
{
	long long dem = 0;
	while (n >= b)
	{
		dem += n / b;
		n = n / b;
	}
	return dem;
}
long long powNumber(long long n, long long b)
{
	long long dem;
	long long i = 2;
	long long s, min1 = 10000000000000000000;
	
	while (b != 1)
	{
		if (b % i == 0)
		{
			b /= i;
			dem = 1;
			while (b % i == 0)
			{
				b /= i;
				dem++;
			}
			s = demSoChia(n, i)/dem;
			min1 = min(s, min1);
		}
		else
			i++;
	}
	return min1;
}
int main()
{
	int n,b;
	cin >> n>>b;
	cout << powNumber(n, b);
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
