// bai6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
vector<int> sumDuoi(std::vector<int> a, int b)
{
	int s, dem = 0;
	vector<int>c{};
	for (int i = b; i >= 1; i--)
	{
		s = a[i] - a[i - 1];
		if (s > 0)
		{
			int v = a[i - 1];
			c.push_back(a[i - 1]);
		}
		else
			break;

	}
	return c;
}
vector<int> sumTren(std::vector<int> a, int b)
{
	int n = a.size();
	int s, dem = 0;
	vector<int>c{};
	for (int i = b; i < n - 1; i++)
	{
		s = a[i] - a[i + 1];
		if (s > 0)
		{
			int v = a[i - 1];
			c.push_back(a[i + 1]);
		}
		else
			break;

	}
	return c;
}
std::vector<int> maxLengMountain(std::vector<int> a)
{
	int s3;
	std::vector<int> arr{};
	int n = a.size();
	if (n < 3)
		return arr;
	std::vector<std::vector<int>> arr3;

	int max1 = 0;
	for (int i = 1; i < n - 1; i++)
	{
		int s1 = a[i] - a[i + 1];
		int s2 = a[i] - a[i - 1];
		if (s1 > 0 && s2 > 0)
		{

			vector<int>arr1 = sumDuoi(a, i - 1);
			vector<int>arr2 = sumTren(a, i + 1);
			if (arr1.size() + arr2.size() + 3 > max1)
			{
				arr = {};
				for (int j = arr1.size()-1; j >=0; j--)
					arr.push_back(arr1[j]);
				arr.push_back(a[i - 1]);
				arr.push_back(a[i]);
				arr.push_back(a[i + 1]);
				for (int j = 0; j < arr2.size(); j++)
					arr.push_back(arr2[j]);
			}
			s3 = arr.size();
			max1 = max(max1, s3);
		}


	}
	return arr;
}
int main()
{
	vector<int>a{38,74,-8,-27,-23,-9,39,58,43,-24,26,-18,-2,9,1,-16,87,-12,40,-22};
	vector<int>arr = maxLengMountain(a);
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";

}

