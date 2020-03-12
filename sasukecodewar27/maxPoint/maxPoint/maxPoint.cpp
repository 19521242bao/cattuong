// maxPoint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>

using namespace std;

long long maxPoint(std::vector<int> a, int k)
{
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++)
	{

		if (k >= a[i])
			k += a[i];
		else
			return k;
	}
	return k;
}

int main()
{
	vector<int>a{ 1,2,3,4 };
	int k;
	cin >> k;
	cout << maxPoint(a, k);
}

