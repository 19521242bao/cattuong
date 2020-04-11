
// bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
long long  sumMod(long long n, long long m)
{
	long long a = m % n;
	long long s = a * (a + 1) / 2; //tổng phần dư
	s %= 1000000007;
	long long s1 = m / n; //tổng phần chia 
	long long s2 = n * (n - 1) / 2;
	s2 %= 1000000007;
	long long s3 = (s2 * s1) % 1000000007;
	long long s4 = (s3 + s) % 1000000007;
	
	return s4;

}

int main()
{
	int n, m;
	cin >> n >> m;
	cout << sumMod(n, m);
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
