// findTeam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<map>
#include<functional>
#include<algorithm>
using namespace std;
std::vector<int> findTeam(std::vector<int> arr, int k)
{
	map<int, int> mp;
	vector<string> v;
	sort(arr.begin(), arr.end());
	for (auto x : arr)
	{
		mp[x]++;
	}
	vector<int>a;
	for (auto x : mp)
	{
		if (x.second == k)
			a.push_back(x.first);
	}
	return a;
}
int main()
{
	vector<int>arr{ 7,73,19,75,98,36,45,42,60,62,75,71,6,74,35 };
	int k=1;
	vector<int>a = findTeam(arr, k);
	int n = a.size();
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
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
