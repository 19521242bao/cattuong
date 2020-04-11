
// bai4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int bestFriend(std::vector<int> a, std::vector<int> b)
{
	int m = max(b[0], b[1]);
	int n = min(b[0], b[1]);
	int cahai = 0, demm = 0, demn = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > m)
			cahai++;
		if (a[i] > n && a[i] <= m)
			demm++;
		if (a[i] <= n)
			demn++;
	}
	int max1 = min(demm, demn);
	if (demn <= demm)
		return demm + cahai;
	else
	{
		int b = demn - demm;
		return max1 + b / 2 + b % 2 + cahai;
	}

}

int main()
{
	vector<int>a{ 4,7,7,1,4,5,6,2 };
	vector<int>b{2, 5};
	cout << bestFriend(a, b);

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
