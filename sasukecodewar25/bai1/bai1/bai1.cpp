// bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<string>
bool devidedBy36(std::string num)
{
	int s = 0;
	int b = num.length() - 1;
	for (int i = 0; i < num.length(); i++)
	{
		num[i] = num[i] - '0';
		s += num[i];
	}
	int a = num[b] + num[b - 1] * 10;
	if (a % 4 == 0 && s % 9 == 0)
		return true;
	return false;

}
int main()
{
	string s;
	getline(cin, s);
	cout << devidedBy36(s);
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
