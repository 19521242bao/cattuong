// bai9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
vector<int>phanTichSo(long long b)
{
	vector<int>arr;
	for (int i = 0; i <= b; i++)
		arr.push_back(0);
	int i = 2;
	while (b > 1)
	{
		if (b % i == 0)
		{
			b /= i;
			arr[i]++;
			i = 2;

		}
		else
			i++;

	}
	return arr;
}
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
	long long result = 0;
	long long min1 = 100000000;
	vector<int>a = phanTichSo(b);
	for (long long i = 2; i <= b; i++)
	{
		if (a[i] != 0)
		{
			result = 0;
			result = demSoChia(n, i);
			result /= a[i];
			min1 = min(result, min1);

		}
	}
	return min1;
}

int main()
{
	long long n, b;
	cin >> n >> b;
	cout << powNumber(n, b);
}