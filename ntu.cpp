// ConsoleApplication161.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long t;
bool NT(long long n)
{
	if (n < 2)
		return false;
	for (long long i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
long long gcd(long long a, long long b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);

}
int main()
{
	long long  n;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		long long dem = 0;
		for (int i = 1; i <= n; i++)
			if (gcd(i, n) == 1)
				dem++;
		if (NT(dem) == true)
			cout << "TRUE" << endl;
		else
			cout << "FALSE" << endl;
	}


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
