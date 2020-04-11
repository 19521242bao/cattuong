

// bai4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<math.h>
using namespace std;
std::vector<int> iconFeeling(std::vector<int> a)
{
	int n = a.size();
	int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0, dem5 = 0, dem6 = 0;
	int dem = 0;
	vector<int>c;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 1)
			dem1++;
		if (a[i] == 2)
			dem2++;
		if (a[i] == 3)
			dem3++;
		if (a[i] == 4)
			dem4++;
		if (a[i] == 5)
			dem5++;
		if (a[i] == 6)
			dem6++;
		
	}
	
	int s3 = min(100,n );
	for (int i = 0; i < a.size(); i++)
	{
		
		dem = 0;
		for (int j = 0; j < a.size(); j++)
		{
			
			if (a[j] == a[i])
				dem++;
		}
		c.push_back(dem);
	}
	
	long long s1 = 0;
	vector<int>arr2;
	vector<int>arr = { 0,dem1,dem2,dem3,dem4,dem5,dem6 };
	sort(arr.begin(), arr.end(), greater<int>());
	vector<int>arr1 = { arr[0],arr[1],arr[2]};
	int dema = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < s3; j++)
		{
			if (arr1[i] == c[j] && arr1[i] != 0)
			{
				dema = 0;
				for (int k = 0; k < arr2.size(); k++)
				{
					if (arr2[k] == a[j])
						break;
					else
						dema++;
				}
				if (dema == arr2.size())
				{
					arr2.push_back(a[j]);
					j = n;
				}
				
			}
		}
	}

	return arr2;
}

int main()
{
	vector<int>a{ 2,3,6,4,3,4,1,6,2,1,1,2,6,4,5,6,5,6,6,6,2,3,5,3,6 };
	vector<int>arr = iconFeeling(a);
	for (int i = 0; i < 3; i++)
		cout << arr[i] << " ";
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
