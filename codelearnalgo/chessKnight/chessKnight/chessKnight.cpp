// chessKnight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int chessKnight(std::string cell)
{
	int x = (int)(cell[0] - 'a') + 1;
	int y = (int)(cell[1]-'0');
	int a1 = x - 2;
	int a2 = x - 1;
	int a3 = x + 1;
	int a4 = x + 2;
	int b1 = y - 2;
	int b2 = y - 1;
	int b3 = y + 1;
	int b4 = y + 2;
	int dem = 0;
	if (a1 > 0)
	{
		if (b2 > 0)
			dem++;
		if (b3 <= 8)
			dem++;
	}
	if (a4 <= 8 )
	{
		if (b2 > 0)
			dem++;
		if (b3 <= 8)
			dem++;
	}
	if (a2 > 0)
	{
		if (b4<= 8)
			dem++;
		if (b1 > 0)
			dem++;
	}
	if (a3 <= 8)
	{
		if (b4 <= 8 )
			dem++;
		if (b1 > 0)
			dem++;
	}
	return dem;

}

int main()
{
	string a;
	getline(cin, a);
	cout << chessKnight(a);
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
