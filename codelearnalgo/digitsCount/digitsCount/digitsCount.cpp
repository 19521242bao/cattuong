// digitsCount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<functional>
#include<algorithm>
#include<math.h>
using namespace std;
int digitsCount(int l, int r)
{
	int freq[10] = { 0 };
	int val;

	// For all number between L to R, check if prime 
	// or not. If prime, incrementing the frequency 
	// of digits present in the prime number. 
	for (int i = l; i <= r; i++)
	{
			int p = i; // If i is prime 
			while (p)
			{
				freq[p % 10]++;
				p /= 10;
			}
		
	}

	// Finding digit with highest frequency. 
	int max1 = freq[0], ans = 0;
	for (int j = 1; j < 10; j++)
	{
		if (max1 <= freq[j])
		{
			max1 = freq[j];
		}
	}
	ans = 11;
	for (int i = 0; i < 10; i++)
		if (freq[i] == max1)
			ans = min(ans, i);


	return ans;
}

int main()
{
	int l, r;
	cin >> l >> r;
	cout << digitsCount(l, r);
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
