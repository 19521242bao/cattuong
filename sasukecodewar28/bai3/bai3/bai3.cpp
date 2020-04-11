

// bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector>
#include<functional>
#include<math.h>
#include<algorithm>
using namespace std;
bool check(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (s[i] < '0' || s[i]>'9')
			return false;
	return true;
}
int numbersInString(std::string str)
{
	int dem = 0;
	int n = str.length();
	string a;
	if (n == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (str[i] >= '0' && str[i] <= '9')
		{
			for (int j = 1; j <= n - i; j++)
			{

				a = str.substr(i, j);
				if (check(a) == false)
					break;
				else
					dem++;
			}
		}
	return dem;
}

int main()
{
	string s;
	cin >> s;
	cout << numbersInString(s);
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
