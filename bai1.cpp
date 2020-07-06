// bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
double max(double a, double b)
{
	return a > b ? a : b;
}
int theBestCar(std::vector<int> a, std::vector<int> b)
{
	int n = a.size();
	double min1 = 1 * .00 * b[0] / a[0];
	double s;
	for (int i = 1; i < n; i++)
	{
		s = 1.00 * b[i] / a[i];
		min1 = max(min1, s);
	}
	for (int i = 0; i < n; i++)
	{
		s = 1.00 * b[i] / a[i];
		if (min1 == s)
			return i;
	}
}
int main()
{
	vector<int>a;
	vector<int>b;
	cout << theBestCar(a, b);
}

