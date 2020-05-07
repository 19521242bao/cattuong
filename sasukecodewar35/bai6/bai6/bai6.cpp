
// bai6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;
void swap(string& a, string& b)
{
	string temp = a;
	a = b;
	b = temp;
}
bool solve1(string a, string b)
{
	if (a.length() > b.length())
		return true;
	if (a.length() < b.length())
		return false;
	if (a > b)
		return true;
	return false;
}
bool solve2(string a, string b)
{
	int min1 = min(a.length(), b.length());
	for (int i = 0; i < min1; i++)
	{
		if (a[i] > b[i])
			return true;
		else
		{
			if (a[i] == b[i])
				continue;
			else
				return false;
		}
	}
	if (a.length() < b.length())
		return true;
	return false;
}
string maxAddString(std::vector<int> arr, int k)
{
	int n = arr.size();
	vector<string>s;
	string s1;
	for (int i = 0; i < n; i++)
	{
		s1 = to_string(arr[i]);
		s.push_back(s1);
	}
	for (int i = 1; i <= n - 1; ++i)
		for (int j = 0; j < n - i; j++)
			if (solve1(s[j], s[j + 1]) == true)
			{
				swap(s[j], s[j + 1]);
			}
	vector<string>s2;
	int k1 = k;
	for (int i = n - 1; k > 0; i--)
	{
		s2.push_back(s[i]);
		k--;
	}
	string s4="";
	sort(s2.begin(), s2.end());
	for (int i = k1 - 1; i >= 0; i--)
		s4 += s2[i];
	
	return s4;

}
int main()
{
	vector<int>arr{9821,97,9};
	int k = 3;
	string a = maxAddString(arr, k);
	cout << a;
	/*string a1 = "23";
	string b = "2345";
	cout << solve1(a1, b);*/
	return 0;
}
//b1: buble sort de tim(ko sai sort vi sort theo y minh)
//b2: a>b khi:
//-log10(a)>log10(b)
//-neu log10(a)==log10(b)
//	so sanh tu trai qua phai 
//b3 tim n la so chu so cua so nho nhat
//so sanh n so dau tien