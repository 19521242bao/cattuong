// ticket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int ticket(std::vector<int> a)
{
	int b = a.size() - 1;
	sort(a.begin(), a.end());
	if (a[0] != 1)
		return 1;
	if (a[b] == b + 1)
		return b + 2;
	for (int i = 0; i < a.size() - 1; i++)
		if (a[i + 1] - a[i] == 2)
			return a[i] + 1;
}

int main()
{
	vector<int>a{ 2,3,4,5,7,1 };
	cout << ticket(a);
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
