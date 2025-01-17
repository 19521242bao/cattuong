// ConsoleApplication161.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int numberOfViewsAtOnce(std::vector<std::vector<int>> a)
{
	vector<int> ps(100005, 0);
	for (auto v : a) {
		ps[v[0]]++;
		ps[v[1] + 1]--;
	}
	int ans = ps[0];
	for (int i = 1; i <= 1e5; i++) {
		ps[i] += ps[i - 1];
		ans = max(ans, ps[i]);
	}
	return ans;
}

int main()
{
	std::vector<std::vector<int>> a{ {0, 4}, {2, 5}, {6, 7} };
	cout << numberOfViewsAtOnce(a);
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
