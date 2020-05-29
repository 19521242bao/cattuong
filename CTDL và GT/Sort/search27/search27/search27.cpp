

// search27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
	int dem = 0;
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
		{

			r = m - 1;
		}
	}
	return -1;
	// if we reach here, then element was 
	// not present 

}
int main()
{
	int a[205], b[205];
	int n, t;
	cin >> n >> t;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < t; i++)
	{
		cin >> b[i];
		int s = binarySearch(a, 0, n - 1, b[i]);
		if (s == -1)
		{
			cout << "-1" << endl;
			continue;
		}
		int h1 = s, h2 = s;
		while(s - 1 >= 0 && a[s - 1] == a[s])
		{

			s= binarySearch(a, 0, s - 1, b[i]);

		}
		while (s + 1 < n && a[s + 1] == a[s])
		{
			s= binarySearch(a, s + 1, n - 1, b[i]);
		}
		cout << h2 - h1+1<<" "<<h1+1<<" "<<h2+1<<endl;
	}
}