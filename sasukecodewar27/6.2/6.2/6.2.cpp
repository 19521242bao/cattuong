#include <iostream>
#include<vector>
long long n, ans;
long long maxSize;
#define NMAX 1000


using namespace std;
bool checkNum(int x) {
	return (trunc(sqrt(x)) * trunc(sqrt(x)) == x);
}

long long backTrack(long long value, long long index, int n,long long  f[]) {
	for (int i = index; i <= sqrt(n); ++i) {
		value += f[i];
		if (value < n)
			backTrack(value, i + 1, n,f);
		if (value == n)
			++ans;
		value -= f[i];
	}
	return ans;
}

void countCase(long long n)
{
	cin >> n;
	int a = sqrt(n);
	long long f[45];
	for (int i = 0; i <= a; i++)
		f[i] = i * i;
	long long ans=backTrack(0, 1, n,f);
	cout << ans;
	//return 0;
}
int main()
{
	countCase(n);
}