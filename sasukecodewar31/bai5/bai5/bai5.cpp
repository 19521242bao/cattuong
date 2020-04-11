// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector>
#include <sstream> 
using namespace std;
//std::vector<int> decodeDivision2(std::string s)
//{
//	int n = s.length();
//	int s1, s2;
//	string s3;
//	for (int i = 0; i < n; i++)
//		if (s[i] == '.')
//		{
//			s1 = i;
//			break;
//		}
//	for(int i=s1+2;i<n;i++)
//		if (s[i] == '(')
//		{
//			s2 = i;
//			break;
//		}
//	for(int i=s1+1;i<n;i++)
//		if (s[i] == ')')
//		{
//			s3 = s.substr(s1 + 1, i - s1);
//			stringstream geek(s3);
//			int x = 0;
//			geek >> x;
//		}
//			
//
//}

int main()
{
	vector<bool>a;
	for (int i = 0; i < 10; i++)
		a.push_back(true);
	for (int i = 0; i < 10; i++)
		cout << a[i]<<" ";
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
