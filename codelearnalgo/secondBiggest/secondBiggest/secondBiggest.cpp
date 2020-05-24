#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;
int secondBiggest(int n, std::vector<int> a)
{
	sort(a.begin(), a.end(), greater<int>());
	int s = a[0];
	int s1 = a[1];
	int s3=-1,s2;
	for (int i = 0; i < n; i++)
		if (a[i] != a[0])
		{
			 s2 = a[i];
			s3 = i;
			break;
		}
	
	if (s3 == -1)
		return s;
	if (s3 == n - 1)
		return s2;
	for (int i = s3 + 1; i < n; i++)
		if (a[i] == s2)
			return a[0];
	return s2;
		
}
int main()
{
	int n=10;
	vector<int>a{ 1,2,3,1,2,3,1,2,3,1 };
	
	cout << secondBiggest(n, a);
}