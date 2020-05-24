// countTeam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int binaryToDecimal(string n)
{
	string num = n;
	int dec_value = 0;

	// Initializing base value to 1, i.e 2^0 
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}
string countTeam(string s)
{
	int a = binaryToDecimal(s);
	if (a % 2 == 0||a%4==1)
		return"even";
	return "odd";

}
string fromDecimal(int b, int n)
{
	string res = "";
	while (b > 0)
	{
		res = to_string(b % n) + res;
		b = b / n;
	}
	return res;
}
int main()
{
	string s;
	cin >> s;
	cout << countTeam(s);
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
