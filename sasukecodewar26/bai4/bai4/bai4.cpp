

// bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
void swap(int i, int j)
{
	
	string s;
	char b = s[i];
	s[i] = s[j];
	s[j] = b;

}
std::string lineUp(std::string s, int t)
{
	int n = s.size();
	for (int i = 1; i <= t; i++)
		for (int j = 0; j < n; j++)
		{
			if (s[j] == 'B' && s[j+1] == 'G')
			{
				swap(s[j], s[j + 1]);
					j = j + 1;
			}
		}
	return s;
}

int main()
{
	string s;
	int t;
	getline(cin, s);
	cin >> t;
	cout << lineUp(s, t);
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
