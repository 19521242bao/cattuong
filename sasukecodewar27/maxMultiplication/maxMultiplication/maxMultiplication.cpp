// maxMultiplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
long long maxMultiplication(std::vector<int> a)
{
	int n = a.size();
	sort(a.begin(), a.end());
	long long s = (long long)a[n - 1] * a[n - 2];
	long long  s1 = (long long)a[1] * a[0];
	if (s < 0 && s1 < 0)
		return 0;
	if (s >= s1)
		return s;
	return s1;

}

int main()
{
	vector<int>a{ 1,2,3,4 };
   cout << maxMultiplication(a);
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
