// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int busStation(int t, int d, std::vector<int> a)
{
	int n = a.size();

	std::vector<int> arr;
	
		int max2 = -1;
	for (int i = 0; i < n; i++)
	{
		max2 = max(a[i], max2);
			
	}
	int b = (max2 - t) / d + 1;
	for(int i=0;i<=b;i++)
		arr.push_back(0);
	t = t - d;
	int max1 = -1;
	int s1=0;
	int dem = 0;
	for (int i = 0; i <= b; i++)
	{
		t += d;
		for (int j = 0; j < n; j++)
		{
			dem = a[j];
			if (dem <= t&& dem>t-d)
			{
				s1++;

			}
		}
			arr[i] = s1;
			s1 = 0;
			max1 = max(arr[i], max1);
		
	}
	for (int i = 0; i < b; i++)
		if (max1 == arr[i])
			return i+1 ;

}

int main()
{
	int t, d;
	cin >> t >> d;
	vector<int>a{ 1,3,5,3,1 };
	cout << busStation(t, d, a);
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
