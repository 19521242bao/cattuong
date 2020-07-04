
// queue-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<queue>
using namespace std;
int main()
{
	int n,k,temp;
	queue<int>qe;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		qe.push(temp);
	}
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int x = qe.front();
		qe.pop();
		qe.push(x);
	}
	while (!qe.empty())
	{
		cout << qe.front() << " ";
		qe.pop();
	}
}
