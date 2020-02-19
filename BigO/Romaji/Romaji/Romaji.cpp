// Romaji.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
bool solve(string s)
{
	int n = s.length() - 1;
	if (s[n] != 'a' && s[n] != 'o' && s[n] != 'e' && s[n] != 'u' && s[n] != 'i' && s[n] != 'n')
		return false;
	for (int i = 0; i < s.length() - 1; i++)
		if (s[i] != 'a' && s[i] != 'o' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i' && s[i] != 'n')
			if (s[i + 1] != 'a' && s[i + 1] != 'o' && s[i + 1] != 'e' && s[i + 1] != 'u' && s[i + 1] != 'i')
				return false;
	return true;
}
int main()
{
	string s;
	getline(cin, s);
	if (solve(s)==true)
		cout << "YES";
	else
		cout << "NO";
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
