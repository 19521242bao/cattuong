#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;
int dp[1024];

// Function to create mask for every number 
int get_binary(int u)
{
	int ans = 0;
	while (u) {
		int rem = u % 10;
		ans |= (1 << rem);
		u /= 10;
	}

	return ans;
}

// Recursion for Filling DP array 
int recur(int u, vector<int>array)
{
	int n = array.size();
	// Base Condition 
	if (u == 0)
		return 0;
	if (dp[u] != -1)
		return dp[u];

	int temp = 0;
	for (int i = 0; i < n; i++) {
		int mask = get_binary(array[i]);

		// Recurrence Relation 
		if ((mask | u) == u) {
			dp[u] = max(max(0,
				dp[u ^ mask]) + array[i], dp[u]);
		}
	}

	return dp[u];
}

// Function to find Maximum Subset Sum 
int maxSum(vector<int>arr)
{
	// Initialize DP array 
	for (int i = 0;  i< (1 << 10); i++) {
		dp[i] = -1;
	}

	int ans = 0;

	// Iterate over all possible masks of 10 bit number 
	for (int i = 0; i < (1 << 10); i++) {
		ans = max(ans, recur(i, arr));
	}

	return ans;
}

// Driver Code 
int main()
{
	vector<int>array  = { 709, 1501, 9613, 7924, 615, 2475, 5530, 6978, 6017, 3471, 3482, 1594, 1401, 6804, 4454, 342, 540, 5845, 8860, 1751, 2379, 4081, 7526, 6320, 5518, 4850, 3298, 9679, 2525, 9734, 2766, 9019, 1098, 7717, 7654, 257, 1440, 9420, 6603, 3991, 4816, 5605, 2475, 8839, 4559, 5523, 9785, 3768, 5381, 758, 3300, 9879, 1286, 4886, 4077, 5354, 1608, 3070, 6523, 646, 2549, 3955, 5337, 4152, 4245, 9231, 3265, 3623, 1547, 5625, 4523, 2736, 4549, 3010, 7630, 1393, 3445, 6906, 7728, 1651, 8755, 414, 3673, 3322, 113, 5316, 1347, 1971, 429, 8409, 5139, 6438, 2724, 6378, 2129, 6827, 5600, 7953, 6802, 1072 };
	int n = sizeof(array) / sizeof(array[0]);

	cout << maxSum(array);
}