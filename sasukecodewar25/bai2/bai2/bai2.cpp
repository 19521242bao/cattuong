

// bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<math.h>
#include<algorithm>
#include<vector>
bool NT(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
int makePrime(int n)
{
	int s = 0;
	vector<int> v;
	if (NT(n) == true)
		return n;
	while (NT(n) != true)
	{
		int s = 0;
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				if (n / i == i) // check if divisors are equal 
					s += i;
				else
				{
					s += i + n / i;
					// push the second divisor in the vector 
					
				}
			}
		}
		if(NT(s)==true)
			return s;
		n = s;
		v.push_back(s);
		for (int i = 0; i < v.size() - 1; i++)
			if (s == v[i])
				return -1;
	}
	
}

// The vector will be printed in reverse 
int main()
{
	int n;
	cin >> n;
	cout << makePrime(n);
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
