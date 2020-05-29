
// searchp26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid 
		if (arr[m] >= x)
			r = m - 1;
		else
			l = m + 1;

		// If x is smaller, ignore right half 
		
	}

	// if we reach here, then element was 
	// not present 
	return l;
}
int main()
{
	int a[2005], b[2005];
	int n, t;
	cin >> n >> t;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < t; i++)
	{
		cin >> b[i];
		int s = b[i];
		int dem = 0;
		dem = binarySearch(a, 0, n - 1, s);
		cout << n-dem<< endl;
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
