// findCenterOfCircle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

std::vector<float> findCenterOfCircle(std::vector<std::vector<int>> points)
{
	vector<float>arr;
	float  xab = points[0][0] - points[1][0];
	float  yab = points[0][1] - points[1][1];
	float xac = points[0][0] - points[2][0];
	float yac = points[0][1] - points[2][1];
	float xbc = points[1][0] - points[2][0];
	float ybc = points[1][1] - points[2][1];
	float AB = pow(xab, 2) + pow(yab, 2);
	float BC = pow(xbc, 2) + pow(ybc, 2);
	float AC = pow(xac, 2) + pow(yac, 2);
	float max1 = max(AB, max(BC, AC));
	if (max1 == AB)
	{
		xab = (float)(points[0][0] + points[1][0]) / 2;
		yab = (float)(points[0][1] + points[1][1]) / 2;
		arr.push_back(xab);
		arr.push_back(yab);
		return arr;
	}
	if (max1 == AC)
	{
		xac = (float)(points[0][0] + points[2][0]) / 2;
		yac = (float)(points[0][1] + points[2][1]) / 2;
		arr.push_back(xac);
		arr.push_back(yac);
		return arr;
	}
	if (max1 == BC)
	{
		xbc = (float)(points[1][0] + points[2][0]) / 2;
		ybc = (float)(points[1][1] + points[2][1]) / 2;
		arr.push_back(xbc);
		arr.push_back(ybc);
		return arr;
	}


}

int main()
{
	std::vector<std::vector<int>> points{ {40,5} ,{25,5},{40,-10} };
	findCenterOfCircle(points);
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
