
// bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool chSo(int n)
{
	int a;
	while (n != 0)
	{
		a = n % 10;
		if (a % 2 != 0)
			return false;
		n = n / 10;

	}
	return true;
		
}


int superEvenNumber(int n)
{
	int dem = 0;
	int b = n % 2;
	n = n - b;
	for (int i = 2; i <= n; i += 2)
		if (chSo(i) == true)
			dem++;
	return dem;
}
int main()
{
	int n;
	cin >> n;
	cout << superEvenNumber(n);
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
