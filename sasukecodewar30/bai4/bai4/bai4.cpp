

// bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
	if (a == b)
		return a;

	// GCD(0, b) == b; GCD(a, 0) == a, 
	// GCD(0, 0) == 0 
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	// look for factors of 2 
	if (~a & 1) // a is even 
	{
		if (b & 1) // b is odd 
			return gcd(a >> 1, b);
		else // both a and b are even 
			return gcd(a >> 1, b >> 1) << 1;
	}

	if (~b & 1) // a is odd, b is even 
		return gcd(a, b >> 1);

	// reduce larger number 
	if (a > b)
		return gcd((a - b) >> 1, b);

	return gcd((b - a) >> 1, a);
}
std::vector<int> powerOfBrain(std::vector<int> a)
{
	int uc = a[1];
	int n = a.size();
	int max1 = -1;
	vector<int>arr;
	vector<int>b;
	if (n == 1)
	{
		b.push_back(1);
		b.push_back(0);
		return b;
	}
	for (int i = 0; i < n; i++){
		if (i != n - 1)
			uc = a[i + 1];
		else
			uc = a[0];
		for (int j = 0; j < n; j++)
		{
			
			if (j != i)
				uc = gcd(a[j],uc );
		}
		arr.push_back(uc);
		max1 = max(max1, arr[i]);
}

	for(int i=0;i<n;i++)
		if (arr[i] == max1)
		{
			b.push_back(i + 1);
			b.push_back(max1);
			return b;
		}

}

int main()
{
	vector<int>a{ 6,12,8 };
	vector<int>arr = powerOfBrain(a);
	cout << arr[0] << " " << arr[1];

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
