// stack-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	s = s + "@";
	stack<char>st;
	int n = s.length();
	int count;
	string str = "";
	for (int i = 0; i < n; i++)
	{
		if (st.empty() || st.top() == s[i]) {
			st.push(s[i]);
		}
		else
		{
			count = 0;
			str = str + st.top();
			while(!st.empty()){
				count++;
				st.pop();
			}
			str = str + to_string(count);
			st.push(s[i]);
			
		}
	}
	cout << str;
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
