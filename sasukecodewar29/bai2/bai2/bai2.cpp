

// bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector>
using namespace std;
bool isSmaller(string str1, string str2)
{
	// Calculate lengths of both string 
	int n1 = str1.length(), n2 = str2.length();

	if (n1 < n2)
		return true;
	if (n2 > n1)
		return false;

	for (int i = 0; i < n1; i++)
	{
		if (str1[i] < str2[i])
			return true;
		else if (str1[i] > str2[i])
			return false;
	}
	return false;
}

// Function for finding difference of larger numbers 
string findDiff(string str1, string str2)
{
	// Before proceeding further, make sure str1 
	// is not smaller 
	if (isSmaller(str1, str2))
		swap(str1, str2);

	// Take an empty string for storing result 
	string str = "";

	// Calculate lengths of both string 
	int n1 = str1.length(), n2 = str2.length();
	int diff = n1 - n2;

	// Initially take carry zero 
	int carry = 0;

	// Traverse from end of both strings 
	for (int i = n2 - 1; i >= 0; i--)
	{
		// Do school mathematics, compute difference of 
		// current digits and carry 
		int sub = ((str1[i + diff] - '0') -
			(str2[i] - '0') -
			carry);
		if (sub < 0)
		{
			sub = sub + 10;
			carry = 1;
		}
		else
			carry = 0;

		str.push_back(sub + '0');
	}

	// subtract remaining digits of str1[] 
	for (int i = n1 - n2 - 1; i >= 0; i--)
	{
		if (str1[i] == '0' && carry)
		{
			str.push_back('9');
			continue;
		}
		int sub = ((str1[i] - '0') - carry);
		if (i > 0 || sub > 0) // remove preceding 0's 
			str.push_back(sub + '0');
		carry = 0;

	}

	// reverse resultant string 
	reverse(str.begin(), str.end());

	return str;
}
int arrayZero(std::vector<std::string> s, int dem = 0)
{
	int n = s.size();
	string b = s[0];
	int n1 = b.length();
	int dem1 = 0;
	for (int i = 0; i < n1; i++)
		if (b[i] == '0')
			dem1++;
	string b1 = s[1];
	int n2 = b1.length();
	int dem2 = 0;
	for (int i = 0; i < n2; i++)
		if (b1[i] == '0')
			dem2++;
	if(dem1==n1&&dem2==n2)
		return dem;
	dem++;
	
	vector<string>arr;
	for (int i = 0; i < n-1; i++)
	{
		arr.push_back ( findDiff(s[i], s[i + 1]));
	}
	arr.push_back(findDiff(s[0], s[n - 1]));
	return arrayZero(arr, dem);
		

}

int main()
{
	vector<std::string> s{ "2071","3159","2163","1268" };
	cout << arrayZero(s);

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
