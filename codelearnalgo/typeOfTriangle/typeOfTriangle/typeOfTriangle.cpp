// typeOfTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int typeOfTriangle(int a, int b, int c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == c || b == c || b == a)
		{
			if (a == b && b == c)
				return 1;
			else
				return 2;
		}
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			return 3;
		return 0;
	}
	return -1;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << typeOfTriangle(a, b, c);
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
