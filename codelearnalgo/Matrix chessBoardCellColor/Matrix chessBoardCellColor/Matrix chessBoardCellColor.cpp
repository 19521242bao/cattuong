// Matrix chessBoardCellColor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int solve(string s)
{
	s[1] = s[1] - '0';
	if (s[1] % 2 == 1)
	{
		if (s[0] == 'A' || s[0] == 'C' || s[0] == 'E' || s[0] == 'G')
			return 1;
		return 0;
	}
	else
	{
		if (s[0] == 'A' || s[0] == 'C' || s[0] == 'E' || s[0] == 'G')
			return 0;
		return 1;
	}
}
bool chessBoardCellColor(std::string cell1, std::string cell2)
{
	if (solve(cell1) == solve(cell2))
		return true;
	return false;
}

int main()
{
	string cell1, cell2;
	getline(cin, cell1);
	getline(cin, cell2);
	cout << chessBoardCellColor(cell1, cell2);
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
