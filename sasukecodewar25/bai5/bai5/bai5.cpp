// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
int rightTurn(std::vector<std::vector<int>> move)
{
	int s1, s2, s3, s4, s5, dem = 0,x1,x2,x3,x4,x5,x6;
	vector<int>a, b;
	for (int i = 1; i < move.size(); i++)
	{
		s1 = move[i][0] - move[i-1][0];
		s2 = move[i][1] - move[i-1][1];
		a.push_back(s1);
		b.push_back(s2);
	}
	int n = a.size();
		for (int i = 1; i < n; i++)
		{
			x1 = a[i];
			x2 = a[i - 1];
			x3 = b[i];
			x4 = b[i - 1];
			s3 = x1 * x2 + x3 * x4;
			if (s3 == 0)
			{
				s4 = a[i] * b[i - 1];
				s5 = b[i] * a[i - 1];
				if ((s4==1&&s5==0)||(s5==-1&&s4==0))
					dem++;
			}
		}
	return dem;
}

int main()
{
	std::vector<std::vector<int>> move{ {0,0} ,{-1,0},{0,0},{1,0},{0,0},{1,0},{1,1},{1,2},{0,2},{0,1},{0,0},{1,0},{0,0},{0,1} };
	cout << rightTurn(move);
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
