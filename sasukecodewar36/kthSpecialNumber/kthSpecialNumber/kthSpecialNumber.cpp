// kthSpecialNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
string kthSpecialNumber(std::vector<int> arr, int k)
{
	if (arr.size() == 1 && arr[0] == 0)
	{
		return "-1";
	}
	sort(arr.begin(), arr.end());
	int n = arr.size();
	vector<string>dp{};
	int s = max(k, n);
	for (int i = 0; i <= s; i++)
		dp.push_back("0");
	
	for (int i = 0; i < n; i++)
		dp[i] = char(arr[i] + 48);
	if (arr[0] == 0)
	{
		for (int i = n; i <= k; i++)
		{
			int s = i / n;
			dp[i] = dp[s] + dp[i % n];
		}
		
		return dp[k];
	}
	
	for (int i = n; i < k ; i++)
	{
		int s = i / n;
		dp[i] = dp[s - 1] + dp[i % n];
	}
	
	return dp[k - 1];
}
int main()
{
	vector<int>arr{1,2,3,4};
	int k= 12053530;
	cout << kthSpecialNumber(arr, k);
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
