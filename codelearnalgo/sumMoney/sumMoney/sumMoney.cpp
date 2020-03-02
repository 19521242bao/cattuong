// sumMoney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long  sumMoney(long long n)
{

	long long  sumMoney = (((n + 1) % 1000000007) * ((n + 2) % 1000000007)) % 1000000007;
	long long sum = n % 1000000007;
	long long s = ((sum * sumMoney) / 6) % 1000000007;
	return s;
}

int main()
{
	long long n;
	cin >> n;
	cout << sumMoney(n);
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
