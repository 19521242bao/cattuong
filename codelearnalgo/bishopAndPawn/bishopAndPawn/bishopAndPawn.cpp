// bishopAndPawn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;
bool  bishopAndPawn(std::string bishop, std::string pawn)
{
	int a1 = (int)(bishop[0] - pawn[0]);
	int a2=(int)(bishop[1] - pawn[1]);
	if (a1 == 0 || a2 == 0)
		return false;
	if (a1 == -a2 || a1 == a2)
		return true;
	return false;
}

int main()
{
	string bishop, pawn;
	getline(cin, bishop);
	getline(cin, pawn);
	cout << bishopAndPawn(bishop, pawn);

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
