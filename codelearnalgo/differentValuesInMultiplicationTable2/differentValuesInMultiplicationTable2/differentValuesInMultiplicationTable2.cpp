// differentValuesInMultiplicationTable2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<vector>
using namespace std;
int numberDifferentValue(vector<int> A) {
	int res = 0;
	for (int i = 0; i < (int)A.size(); ++i) {
		/// biến ok kiểm soát xem giá trị A[i] đã xuất hiện trước đó hay chưa ?
		bool ok = true;
		for (int j = 0; j < i; ++j)
			if (A[i] == A[j]) {
				/// Nếu giá trị A[i] đã xuất hiện trước đó rồi thì gán lại ok là false
				ok = false;
				break;
			}
		/// Nếu giá trị A[i] chưa được xét trước đó thì tăng kết quả lên một 
		if (ok) res++;
	}
	return res;
}
int differentValuesInMultiplicationTable2(int n, int m)
{
	vector<int>a;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			a.push_back(i * j);
	int sum = numberDifferentValue(a);
	return sum;
}

int main()
{
	int n, m;
	cin >> n >> m;
	cout << differentValuesInMultiplicationTable2(n, m);
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
