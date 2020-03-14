// countCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
long long n, ans;
long long maxSize;
#define NMAX 1000
long long f[NMAX];

using namespace std;
bool checkNum(int x) {
	return (trunc(sqrt(x)) * trunc(sqrt(x)) == x);
}

void backTrack(long long value, long long index,int n) {
	for (int i = index; i <= maxSize; ++i) {
		value += f[i];
		if (value < n)
			backTrack(value, i + 1,n);
		if (value == n)
			++ans;
		value -= f[i];
	}
}

void countCase(int n)
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
		if (checkNum(i))
			f[++maxSize] = i;
	backTrack(0, 1,n);
	cout << ans;
	//return 0;
}
int main()
{
	 countCase(n);
}