// Bảng xếp hạng.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
	int a[100001], b[100001];
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];

	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n;)
		{
			if (a[i] == a[j])
			{
				for (int k = j; k < n - 1; ++k)
					a[k] = a[k + 1];

				--n;
			}
			else
				++j;
		}


	for (int i = 0; i < m; i++)
	{
		if (b[i] < a[n - 1])
			cout << n + 1 << endl;
		else
		{
			for (int j = 0; j < n; j++)
				if (a[j] <= b[i])
				{
					cout << j + 1 << endl;
					break;
				}
		}
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
