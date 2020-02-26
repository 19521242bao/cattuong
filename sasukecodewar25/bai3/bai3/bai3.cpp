// bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

long long  arrayInteger(std::vector<int> a)
{
	
	long long s = 0;
	long long n = a.size();
	long long s2 = n * (n + 1) / 2;
	sort(a.begin(), a.end());
	long long x1 = a[0];
	long long max1 = 0;
	long long s1;
	long long dem=0;
	if (x1 < 1)
		for (long long i = 0; i < n; i++)
		{
			dem = 1 - x1;
			a[i] += dem;
			
		}
	for (long long i = 0; i < n; i++)
		s += a[i];
	for (long long i = 0; i < n; i++)
	{
		s1 = i + 1 - a[i];
			max1 = max(s1, max1);
	}
	if (max1 >= 0)
	{
		s += max1 * n;
		return s - s2 + max1+dem;
	}
	return s - s2+dem;
	
		
}

int main()
{
	vector<int>a{ 1,2,4};
   cout << arrayInteger(a);
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
