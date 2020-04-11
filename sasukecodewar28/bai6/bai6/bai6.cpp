// bai6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
std::vector<int> trianglesPointed(long long a, long long b)
{
	long long s1 = abs(a * a - b * b);
	long long  s2 = abs(a * a + b * b);
	long double s11 = sqrt(s1);
	long double s22 = sqrt(s2);
	int canduoi = (int)s11;
	int cantren = (int)s22;
	if (s11 != (int)s11||s11==0)
		canduoi = (int)s11 + 1;
	if (s22 == (int)s22)
		cantren -= 1;
	
	vector<int>arr;
	arr.push_back(canduoi);
	arr.push_back(cantren);
	return arr;

}

int main()
{
	int a, b;
	cin >> a >> b;
	vector<int>arr=trianglesPointed(a, b);
	cout << arr[0] << " " << arr[1];
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
