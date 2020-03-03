// bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<math.h>
#include<vector>
int pow1(int a, int b)
{
	if (b == 0)
		return 1;
	int s = 1;
	for (int i = 1; i <= b; i++)
		s *= a;
	return s;
}
int powerOfThreeNotNine(int m, int n)
{
	int a = log10(m)/log10(3);
	int b = log10(n) / log10(3);
	if (a % 2 == 0)
		a += 1;
	int dem = 0;
	int d;
	for (int i = a; i <= b; i += 2)
	{
		d = pow(3, i);
		if (d >= m && d <= n)
			dem++;
	}
	return dem;
}

using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	cout << powerOfThreeNotNine(m, n);
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
