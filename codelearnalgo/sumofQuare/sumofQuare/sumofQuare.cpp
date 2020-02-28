

// sumofQuare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
#include<functional>
#include<math.h>
using namespace std;
int sumOfSquare(int n)
{
	if (n < 5)
		return 0;
	int a = sqrt(n);
	int a1 = sqrt(n / 3);
	int b, dem = 0;
	float c;
	int min1;
	for (int i = 1; i <= a; i++)
	{
		min1 = min(i, a1);
		for (int j = 0; j <= min1&&j<i ;j++)
		{
			b = i * i + j * j;
			b = n - b;
			c = (float)sqrt(b);
			if (c == (int)c && (c > i))
				dem++;
		}
	}
	return dem;
}

int main()
{
	int n;
	cin >> n;
	cout << sumOfSquare(n);
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
