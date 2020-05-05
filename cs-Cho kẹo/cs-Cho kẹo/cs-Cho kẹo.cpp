#include <iostream>
#include<math.h>
#include <stack>
#include <queue>
#include<algorithm>
#include<string>
using namespace std;
struct team
{
	int m;
	int submit[1000], length[1000];
	string name;
};
bool Compare(team a, team b)
{
	int sumA = 0, sumB = 0;
	int countA = 0, countB = 0;
	for (int i = 0; i < a.m; i++)
	{
		if (a.length[i] == 0)
			countA++;
		else
			sumA += a.length[i];
		if (b.length[i] == 0)
			countB++;
		else
			sumB += b.length[i];
	}

	if (countA != countB) return countA < countB;
	return sumA < sumB;

}
void solve(team* T, int n)
{
	int count;
	sort(T, T + n, Compare);
	for (int i = 0; i < n; i++)
	{
		cout << T[i].name << " ";
		for (int j = 0; j < T[i].m; j++)
		{
			cout << T[i].submit[j] << " ";
			if (T[i].length[j] == 0)
			{
				cout << T[i].length[j] << " ";
			}
			else cout << T[i].length[j] / 60 << " ";
		}
		cout << endl;
	}

}
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	team* T;
	string s;
	int n, m, j;
	cin >> n >> m;
	T = new team[n];
	fflush(stdin);
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		j = 0;
		getline(cin, s);
		while (s[j] != ' ')
			j++;
		T[i].name.assign(s, 0, j);
		string temp;
		int k = 0;
		for (int l = j + 1; l < s.length(); l++)
		{
			while (s[l] != ' ')
			{
				temp += s[l];
				l++;
			}
			T[i].submit[k] = stoi(temp);
			temp.clear();
			l++;
			while (s[l] != ' ')
			{
				temp += s[l];
				l++;
			}
			T[i].length[k] = stoi(temp);
			temp.clear();
			k++;
		}
		T[i].m = m;
	}
	solve(T, n);
	int time, count;
	for (int j = 0; j < m; j++)
	{
		time = 0, count = 0;
		for (int i = 0; i < n; i++)
			if (T[i].length[j] == 0)
			{
				time += (T[i].submit[j]) * 20;
			}
			else
			{
				time += T[i].length[j] / 60;
				count++;
			}
		cout << count << "," << (time) / n << " ";
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
