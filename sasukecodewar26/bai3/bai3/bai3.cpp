
// bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
std::vector<int> createRectangle(std::vector<std::vector<int>> points)
{
	float x1 = points[0][0], y1 = points[0][1];
	float x2 = points[1][0], y2 = points[1][1];
	float x3 = points[2][0], y3 = points[2][1];
	float AB = pow(x1 - x2, 2) + pow(y1 - y2, 2);
	float AC = pow(x1 - x3, 2) + pow(y1 - y3, 2);
	float BC = pow(x2 - x3, 2) + pow(y2 - y3, 2);
	float max1 = max(AB, max(AC, BC));
	float xi, yi;
	int x4, y4;
	vector<int>a;
	if (max1 == AB)
	{
		xi = (x1 + x2) / 2;
		yi = (y1 + y2) / 2;
		x4 = 2*xi - x3;
		y4 = 2 * yi - y3;
		a.push_back(x4);
		a.push_back(y4);
		return a;
	}
	if (max1 == AC)
	{
		xi = (x1 + x3) / 2;
		yi = (y1 + y3) / 2;
		x4 = 2 * xi - x2;
		y4 = 2 * yi - y2;
		a.push_back(x4);
		a.push_back(y4);
		return a;
	}
	if (max1 == BC)
	{
		xi = (x3 + x2) / 2;
		yi = (y3 + y2) / 2;
		x4 = 2 * xi - x1;
		y4 = 2 * yi - y1;
		a.push_back(x4);
		a.push_back(y4);
		return a;
	}
}

int main()
{
	std::vector<std::vector<int>> point;
	createRectangle(point);
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
