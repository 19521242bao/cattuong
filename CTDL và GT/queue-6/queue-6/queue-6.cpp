// queue-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<queue>
using namespace std;
bool IsPrime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i+=1)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	queue<int>qe;
	qe.push(2);
	qe.push(3);
	qe.push(5);
	qe.push(7);
	while (!qe.empty())
	{
		for (int i = 1; i <= 9; i++)
		{
			int k = qe.front() * 10 + i;
			if (k <= n && IsPrime(k))
				qe.push(k);
		}
		cout << qe.front() << " ";
		qe.pop();
	}
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
