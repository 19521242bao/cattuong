// shortestWayToZero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long dem = 0;
long long shortestWayToZero(long long n, long long k)
{
	long long dem = 0;
	while (n != 0)
	{
		long long s = n % k;
		dem+=s;
		long long d = n - n % k;
		long long e = d / k;
		dem++;
		n = e;
	 }
	return dem-1;
}

int main()
{
	long long n, k;
	cin >> n >> k;
	cout << shortestWayToZero(n, k);
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
