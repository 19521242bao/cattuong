// makeTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<functional>
#include<algorithm>
#include<math.h>
using namespace std;
int makeTriangle(int a, int b, int c)
{
	int a1 = max(a, max(b, c));
	int c1 = min(a, min(b, c));
	int b1 = a + b + c - a1 - c1;

	if (c1 + b1 > a1)
		return 0;
	return a1 - b1 - c1 + 1;

}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << makeTriangle(a, b, c);
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
