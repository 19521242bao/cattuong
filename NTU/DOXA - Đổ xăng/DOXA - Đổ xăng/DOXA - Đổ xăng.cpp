﻿// DOXA - Đổ xăng.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<functional>
#include<algorithm>
#include<math.h>
using namespace std;
int a[101], b[101];
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> b[i];
	}
	long long dem = 0;
	int i = 1;
	while (i <= n)
	{
		sort(b + 1, b + i + 1);
		i++;
		dem = dem + (a[i] * b[1]);
	}
	cout << dem;
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
