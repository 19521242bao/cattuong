// checkEqualFrequency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
bool checkEqualFrequency(std::vector<int> inputArray)
{
	if (inputArray.size() == 1)return true;
	vector<int>z;
	sort(inputArray.begin(), inputArray.end());
	inputArray.push_back(0);
	int count = 1;
	for (int i = 1; i < inputArray.size(); ++i) {
		if (inputArray[i - 1] != inputArray[i]) {
			z.push_back(count);
			if (z.size() > 1)if (z[z.size() - 1] != z[z.size() - 2])return false;
			count = 1;
		}
		else count++;
	}
	return true;
}
int main()
{
	vector<int>a{ 1, 2, 2, 3, 1, 3, 1, 3 };
	cout << checkEqualFrequency(a);
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
