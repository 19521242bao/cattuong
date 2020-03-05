// bai7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
int moveCandy(std::vector<int> candy)
{
	int s = 0;
	int n = candy.size();
	int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0;
	if(dem1+dem2<=3&&n<2)
		return -1;
	
		for (int i = 0; i < n; i++)
		{
			if (candy[i] == 1)
				dem1++;
			if (candy[i] == 2)
				dem2++;
			if (candy[i] == 3)
				dem3++;
			if (candy[i] == 4)
				dem4++;
		}
		if (dem2 >= dem1)
		{
			s += dem1;
			dem2 = dem2 - dem1;
			if (dem2 > dem4)
			{
				s += dem4;
				dem2 = dem2 - dem4;
				s += dem2 * 2;
				return s;
			}
			return dem2;
		}
			
		else
		{
			s += dem2;
			dem1 -= dem2;
			s += dem1 / 3*2 + dem1 % 3;
			return s;
		}
}

int main()
{
	vector<int>a{ 3,1,1,1,1,1,1,3,4,1,1,3,3,3,3,1,3,1,4,1,1,1,1,3,1,3,1,1,1,1,1,1,1,1,1,1,1,1,3,3,1,1,3,1,1,1,1,1,1,1,1,1,3 };
	cout << moveCandy(a);
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
