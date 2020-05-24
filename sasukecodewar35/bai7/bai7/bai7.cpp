// bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string giftsForYoung(string name, int money, string say)
{
	int n = name.length();
	int total = 0;
	for (int i = 0; i < n; i++)
		if ((int)name[i]!=44)
		{
			total += (int)name[i];
		}
	string s = "";
	if (money - total == 1)
		total += 1;
	if (say == "trust")
	{
		if (money % total == 0)
			s = "Free";
		else
		{
			if (money >=total)
				s = "Pay";
			else
			{
				s = "Can not buy";
			}
		}
	}
	else
	{
		if (money % total == 0)
			s = "Free";
		else
		{
			if (money >= total)
				s = "Pay";
			else
			{
				s = "Police";
			}
		}
	}
	return s;
}
int main()
{
	string name, say;
	int money;
	cin >> name >> money >> say;
	cout << giftsForYoung(name, money, say);
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
