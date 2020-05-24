// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i; j < n - 1; j++)
		{
			if (a[j] <= a[j + 1])
			{
				if (j == n - 2)
				{
					dem++;
					cout<<dem;
					return 0;
				}
			}
			else
				{
					dem++;
					i = j;
					if (j == n - 2)
						dem++;
					break;
				}
			
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
