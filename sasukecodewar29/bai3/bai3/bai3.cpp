
// bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;
std::string boxChat(std::string s, std::vector<std::string> a)
{
	int n = s.length();

	int dem = 0;
	for (int i = 0; i < n; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			dem = i;
			break;
		}
	string b,s1;
	int m = a.size();
	for (int i = dem; i < n; i++)
		if (s[i] == ' ')
		{
			b = s.substr(dem, i - dem + 1);
			for (int j = 0; j < m; j++)
			{
				s1 = a[j];
				if (s1 == b)
					for (int x = 0; x < b.size(); x++)
						s1[i] = "*";
			}
		}
}

int main()
{
    std::cout << "Hello World!\n";
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
