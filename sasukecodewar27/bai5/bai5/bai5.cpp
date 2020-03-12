// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<functional>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
std::vector<int> maxLengMountain(std::vector<int> a)
{
	if (a.size() < 3)
		return 0;
	bool up = true;
	int maxn = 0, cnt = 1;
	for (int i = 0; i < a.size() - 1; i++) {
		if (up) {
			if (a[i] < a[i + 1]) {
				cnt++;
			}
			else if (a[i] == a[i + 1]) {
				cnt = 1;
			}
			else if (cnt > 1 && a[i] > a[i + 1]) {
				cnt++;
				maxn = max(cnt, maxn);
				up = false;
			}
		}
		else {
			if (a[i] > a[i + 1] && cnt > 1)
			{
				cnt++;
				maxn = max(cnt, maxn);
			}
			else 
				if (a[i] == a[i + 1])
				{
				cnt = 1;
				}
			else 
				if (a[i] < a[i + 1])
				{
				cnt = 1;
				cnt++;
				up = true;
				}
		}
	}
	return maxn;
}

int main()
{
    std::cout << "Hello World!\n";
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
