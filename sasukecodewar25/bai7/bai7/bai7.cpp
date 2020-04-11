

// bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<math.h>
#include<string>
using namespace std;
std::vector<int> sortArray(std::vector<int> a)
{
	int vitri = -1;
	vector<int>b,c;
	int n = a.size();
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0)
		{
			if (a[i] > 0)
				b.push_back(a[i]);
			if (a[i] < 0)
				c.push_back(a[i]);
		}
		else
			vitri = i;	
	}
	int m = b.size();
	int s;
	int k = 0, v = 0;
	sort(b.begin(),b.end());
	sort(c.begin(), c.end(), greater<int>());
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			s = b[k];
			a[i] = b[k];
			k++;
		}
		if (a[i] < 0)
		{
			s = c[v];
			a[i] = c[v];
			v++;
		}
	}
	return a;

}

int main()
{
	vector<int>a{ 5,-3,1,3,-2 };
	sortArray(a);
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
