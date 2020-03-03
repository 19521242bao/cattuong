
// bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int maxDiv(std::vector<int> a)
{
	if (a.size() == 1)
		return 0;
	int max1 = -1000000000 ,min1 = 1000000000 , max2 = -1000000000, min2 = 1000000000;
	int dem1 = 0, dem2 = 0;
	for (int i = 0; i < a.size(); i++)
	{
	
		if (a[i] > 0)
		{
			dem1++;
			max1 = max(a[i], max1);
			min1 = min(a[i], min1);
		}
		else
		{
			if (a[i] < 0)
			{
				dem2++;
				max2 = max(a[i], max2);
				min2 = min(a[i], min2);
			}
		}
	}
	int div1 = max1 / min1;
	int div2 = min2 / max2;
	if (dem1 == 1 && dem2 == 1)
	{
		if (abs(max1) >= abs(min2))
			return max1 / min2;
		return 0;
	}
	if (dem1 == 1)
	{
		if (a.size() == 2)
			return 0;
		return div2;
	}
		if (dem2 == 1)
		{
			if (a.size() == 2)
				return 0;
			return div1;
		}
	return max(div1, div2);
}

int main()
{
	vector<int>a{3,-1};
	cout << maxDiv(a);
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
