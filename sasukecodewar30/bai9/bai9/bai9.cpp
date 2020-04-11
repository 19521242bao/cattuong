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
	while (n % b == 0&&n>=2)
	{
		n /= b;
		dem++;
	}
	return dem;
}
long long powNumber(long long n, long long b)
{
	long long result = 0;
	vector<int>a = phanTichSo(b);
	for (int i = 2; i <= b; i++)
		if (a[i] != 0)
			for (int j = i; j <= n; j += i)
				result += demSoChia(j, a[i]);
	return result;
}

int main()
{
	long long n,b;
	cin >> n >> b;
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
