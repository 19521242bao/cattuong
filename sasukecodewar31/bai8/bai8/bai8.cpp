// bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include <stdlib.h>
#include <sstream>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;


long long grasshopper2(int n, std::vector<int> a)
{
	vector<int>arr;
	arr.push_back(1);
	for (int i = 1; i <= n; i++)
		arr.push_back(0);
	int n1 = a.size();
	sort(a.begin(), a.end());
	for (int i = 0; i < n1; i++)
		arr[a[i]]++;
	long long s = 0;
	int  s1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			s1 = i - a[j];
			if (s1 < 0)
				continue;
			s += arr[i - a[j]];
			
		}
		arr[i] = s;
		s = 0;
	}
	return arr[n];

}

int main()
{
	vector<int> a{ 33,1,4};
	int n;
	cin >> n;
	cout << grasshopper2(n, a);
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
