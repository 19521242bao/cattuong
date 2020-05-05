// bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long pow1(int a, int b)
{
	if (b == 0)
		return 1;
	long long s = 1;
	for (int i = 1; i <= b; i++)
		s *= a;
	return s;
}
long long sumSpecialNumber(int n, int k)
{
	int k1 = k - 2;
	long long s = 0;
	for (int i = 0; i <= k1; i++)
		s += pow1(n, i);
	
	long long s2 = pow1(2, k1 );
	long long s3 = s * s2;
	return s3;
}
int main()
{
	int n, k;
	cin >> n >> k;
	cout << sumSpecialNumber(n, k);
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
