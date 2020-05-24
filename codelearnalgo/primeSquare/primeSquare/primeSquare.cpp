// primeSquare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
int primeSquare(int n)
{
	if (n == 1)
		return 1;
	vector<bool>dp;
	for (int i = 0; i <= n; i++)
		dp.push_back(true);
	for (int i = 2; i <= sqrt(n); i++)
		if (dp[i] == true)
			for (int j = 2 * i; j <= n; j += i)
				dp[j] = false;
	if (dp[n] == true)
		return n * n;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if (dp[i] == true)
			s += i * i;
		else
			s += i;
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	cout << primeSquare(n);
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