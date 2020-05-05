
// bai9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
bool check(std::vector<int> a)
{
	int n = a.size();
	for (int i = 0; i < n; i++)
		if (a[i] != 1)
			return false;
	return true;
}
int longestArray(std::vector<int> a)
{
	int n = a.size();
	int max1 = 1,k1=0,k=2;
	while (check(a) == false)
	{
		for (int i = 0; i < n; i++)
			if (a[i] % k == 0)
			{
				while (a[i] % k == 0)
				{
					a[i] /= k;
				}
				k1++;
			}
		max1 = max(k1, max1);
		k++;
		k1 = 0;
				
	}
	return max1;
}
int main()
{
	vector<int>a{1,1,1,1,1};
	cout << longestArray(a);
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
