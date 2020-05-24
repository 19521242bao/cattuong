// countChar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
bool canMakePalindromeString(string str)
{
	int n = str.length();
	map<char, int>mp;
	vector<string>v;
	for (auto x : str)
		mp[x]++;
	if (n % 2 == 0)
	{
		for (auto x : mp)
		{
			if (x.second % 2 == 1)
				return false;
		}
		return true;
	}
	int dem = 0;
	for (auto x : mp)
	{
		if (x.second % 2 == 1)
			dem++;
		if (dem >= 2)
			return false;
	}
	return true;
}

int main()
{
	string str;
	cin >> str;
	cout << canMakePalindromeString(str);
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
