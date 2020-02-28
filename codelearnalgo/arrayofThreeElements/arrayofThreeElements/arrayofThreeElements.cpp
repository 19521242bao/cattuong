// arrayofThreeElements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
std::vector<int> arrayofThreeElements(std::vector<int> a, int n)
{
	int s, s1, s2, x;
	vector<int>b;
	for (int i = 0; i < n; i++)
	{
		s = i - 1;
		s1 = i + 1;
		s2 = i + 2;
		if (s < 0)
			a[i - 1] = 0;
		if (s1 < 0)
			a[i + 1] = 0;
		x = a[i - 1] + a[i] + a[i + 1];
		b.push_back(x);

	}
	return b;
}

int main()
{
    std::cout << "Hello World!\n";
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
