
// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
int buildFloor2(std::vector<std::vector<int>> a)
{
	int b;
	int m = a.size();
	int n = a[0].size();
	int cont = 0;
	int dem = 0;
	int s;
	for (int i = 0; i < a.size(); i++)
	{
		dem = i % 2;
		for (int j = 0; j < a[i].size(); j++)
		{
			b = dem % 2;
			dem++;
			s = a[i][j];
			if (b == s)
				cont++;
		}
	}
	if (cont > m * n - cont)
		return m * n - cont;
	return cont;
}


int main()
{
	std::vector<std::vector<int>> a{ {0, 1, 0, 1, 0, 1, 0, 1},{1, 0, 1, 0, 1, 0, 1, 0},{0, 1, 0, 1, 0, 1, 0, 1},{1, 0, 1, 0, 1, 0, 1, 0},{0, 1, 0, 1, 0, 1, 0, 1},{1, 0, 1, 0, 1, 0, 1, 0},{0, 1, 0, 1, 0, 1, 0, 1} };
	cout << buildFloor2(a);
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
