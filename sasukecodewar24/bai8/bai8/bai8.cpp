
// bai8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
long long  max1(std::vector<int> arr)
{
	long long  max = arr[0];
	for (long long i = 1; i < arr.size(); i++)
		if (max < arr[i])
			max=arr[i];
	return max;
}
long long mafia(std::vector<int> arr)
{
	long long s = 0;
	long long b = arr.size() - 1;
	for (long long  i = 0; i < arr.size(); i++)
		s += arr[i];
	float c = (float)s / b;
	long long  d = s / b;
	if (c != d)
		d = d + 1;
	int max = max1(arr);
	if (d < max)
		return max;
	return d;
}

int main()
{
	vector<int>arr{ 1 ,555, 876, 444, 262, 234, 231, 598, 416, 261, 206, 165 ,181 ,988 ,469 ,123 ,602 ,592 ,533 ,97 ,864 ,716 ,831 ,156 ,962 ,341, 207 ,377 ,892 ,51 ,866 ,96 ,757, 317, 832, 476 ,549 ,472, 770 ,1000 ,887, 145 ,956 ,515 ,992, 653 ,972, 677, 973 ,527 ,984 ,559 ,280 ,346 ,580 ,30 ,372, 547, 209, 929, 492, 520, 446 ,726, 47 ,170, 699, 560, 814, 206, 688, 955, 308 ,287, 26 ,102 ,77 ,430, 262, 71 ,415 ,586, 532, 562, 419, 615, 732, 658, 108 ,315, 268, 574, 86 ,12 ,23 ,429, 640, 995 ,342 ,305 };
	cout << mafia(arr);
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
