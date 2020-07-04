// mettingRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
struct meeting {
	int begin;
	int end;
};
bool sosanh(meeting x, meeting y)
{
	return x.end < y.end;
}
int mettingRoom(std::vector<int> s, std::vector<int> e)
{
	vector<meeting>a;
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		int x = s[i];
		int y = e[i];
		meeting b;
		b.begin = x;
		b.end = y;
		a.push_back(b);
	}
	int cnt = 0,i=0;
	sort(a.begin(), a.end(),sosanh);
	for (int j = 1; j < n; j++)
		if (a[j].begin > a[i].end)
		{
			cnt++;
			i = j;
		}
	return cnt;

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
