// catalan-nth.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
unsigned long int catalan(unsigned int n)
{
	if (n <= 1)
		return 1;
	unsigned int res = 0;
	for (int i = 0; i < n; i++)
		res += catalan(i) * catalan(n - i - 1);
	return res;

}
// quy hoạch động
unsigned long int catalanDP(unsigned int n)
{
	// Table to store results of subproblems 
	unsigned long int catalan[n + 1];

	// Initialize first two values in table 
	catalan[0] = catalan[1] = 1;

	// Fill entries in catalan[] using recursive formula 
	for (int i = 2; i <= n; i++) {
		catalan[i] = 0;
		for (int j = 0; j < i; j++)
			catalan[i] += catalan[j] * catalan[i - j - 1];
	}

	// Return last entry 
	return catalan[n];
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
		cout << catalan(i) << " ";
	return 0;
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
