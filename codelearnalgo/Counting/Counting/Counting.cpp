// Counting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
long long k;
int lt(long long k)
{
	if (k == 1) return 2;
	else
	{
		long long h = lt(k / 2);
		if (k % 2 == 0) return (h * h) % 123456789;
		else
			return (2 * h * h) % 123456789;
	}
}
int main()
{
	//freopen("t.inp","r",stdin);
	//freopen("t.out","w",stdout);
	cin >> k;
	if (k == 0) cout << 0; else if (k == 1) cout << 1; else cout << lt(k - 1);
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
