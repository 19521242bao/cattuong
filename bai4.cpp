
#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
bool search(vector<int>other,int x)
{
	int n = other.size();
	for (int i = 0; i < n; i++)
		if (x == other[i])
			return true;
	return false;
}
std::vector<int> sortArray(std::vector<int> arr, std::vector<int> other)
{
	vector<int>a1{};
	int n = arr.size();
	for (int i = 0; i < n; i++)
		a1.push_back(1);
	vector<int>a;
	for (int i = 0; i < n; i++)
	{
		if (search(other, arr[i]) == true)
			a1[i] = 0;
		else
			a.push_back(arr[i]);
	}
	sort(a.begin(), a.end());
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a1[i] != 0)
		{
			arr[i] = a[k];
			k++;
		}
	}
	return arr;
}
int main()
{
	vector<int>arr;
	vector<int>other;
	cout
}