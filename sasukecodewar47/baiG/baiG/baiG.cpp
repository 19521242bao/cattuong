
// baiG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<map>
#include<algorithm>
#include<functional>
using namespace std;
bool swapCharacters(string str1, string str2)
{
	int n = str1.length();
	if (n != str2.length())
		return false;
	int count = 0;
	map<char, int>mp;
	int s=0;
	for (auto x : str1)
	{
		mp[x]++;
		s = max(mp[x], s);
	}
	for (int i = 0; i < n; i++)
		if (str1[i] != str2[i])
			count++;
	if ( count == 2||(count==0&&s>=2))
		return true;
	return false;
}
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << swapCharacters(s1, s2);
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
