// bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;
std::string deleteChar(std::string s, int k)
{
	
	if (s.length() == 1)
	{
		string s1 = "0";
		return s1;
	}
	for (int i = 1; i < s.length(); i++)
		if (s[i] >=s[i - 1])
		{
			s.erase(i - 1, 1);
			if (i - 2 >= 0)
				i -= 2;
			i -= 1;
			k--;
			if (k == 0)
				return s;
		}
	return s;
}


int main()
{
	string s;
	int k;
	cin >> s;
	cin >> k;
	cout << deleteChar(s, k);
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
