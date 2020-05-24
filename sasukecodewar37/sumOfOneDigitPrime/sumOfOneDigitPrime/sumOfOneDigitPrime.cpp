// sumOfOneDigitPrime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;
bool check(int i, int val)
{
	if (i - val < 0)
		return false;
	return true;
}
long long sumOfOneDigitPrime(long long n)
{
	if (n <= 1)
		return -1;
	vector<long long>dp;
	int s1;
	for (int i = 0; i <= 13; i++)
		dp.push_back(1e9);

	dp[0] = dp[2] = dp[3] = dp[5] = dp[7] = 1;
	dp[4] = dp[6] = dp[8] = dp[10] = dp[12]=dp[9]=2;
	dp[13] =dp[11]=3;
	long long result= n / 7 - 1 + dp[n % 7 + 7];
	return result;
}

// Driver Code 
int main()
{

	int n ;
	cin >> n;

	int minimal = sumOfOneDigitPrime(n);
	cout << minimal;

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
