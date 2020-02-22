// daycon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, a[1001], t[1001], l[1001], jmax;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	a[0] = 0; a[n + 1] = 1001; l[n + 1] = 1;
	for (int i = n; i >= 0; i--)
	{
		jmax = n + 1;
		for (int j = i + 1; j <= n; j++)
			if ((a[i] < a[j]) && (l[j] > l[jmax])) jmax = j;
		l[i] = l[jmax] + 1;
		t[i] = jmax;
	}
	cout << l[0] - 2 << endl;
	int i = t[0];
	while (i != n + 1)
	{
		cout << a[i] << " ";
		i = t[i];
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
