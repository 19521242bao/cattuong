
// bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int countString(std::string s)
{
	string a[10000];
	int k = 0;
	int n = s.length();
	for (int len  = 1; len <= n; len++)
		for (int i = 0; i <= n - len; i++)
		{
			
			a[k] = s.substr(i, len);
			
			for (int v = 0; v < k; v++)
				if (a[k] == a[v])
				{	
					k--;
					break;
				}
			k++;
		}
	return k;
			
}	

int main()
{
	string s;
	getline(cin, s);
	cout << countString(s);
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
