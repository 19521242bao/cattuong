// switchString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
bool switchString(string s1, string s2)
{
	if (s1.size() != s2.size())
		return false;
	int dem = 1;
	for (int i = 1; i < s2.size(); i++)
		if (s2[i] == s2[0])
			dem++;
	if (dem == s2.size() - 1)
		return true;
	int cnt = s1.size();
	string ss = "";
	for (int i = 0; i < cnt; i++)
	{
		if (s2[i] != s1[i])
		{
			char temp = s1[i];
			for (int j = 0; j < cnt; j++)
				if (s1[j] == temp)
					s1[j] = s2[i];
			while (s2[i] == s2[i + 1])
				i++;
		}
	}
	if (s1 != s2)
		return false;
	return true;
}
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << switchString(s1, s2);
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
