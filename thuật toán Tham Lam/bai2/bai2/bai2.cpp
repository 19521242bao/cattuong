

// bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX 100009
int s[MAX], e[MAX];
int N;
using namespace std;
void swap(int i, int j)
{
	int tmp = e[i];
	e[i] = e[j];
	e[j] = tmp;
	tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
}

void qsort(int a[], int start, int end)
{
	// quicksort theo thời gian kết thúc
	if (start >= end)
		return;
	int index = rand() % (start - end) + start;
	int pivot = a[index];
	int k = start - 1;
	swap(index, end);
	for (int i = start; i < end; i++)
		if (a[i] < pivot)
		{
			k++;
			swap(i, k);
		}
	k++;
	swap(k, end);
	qsort(a, start, k - 1);
	qsort(a, k + 1, end);
}

void proc()
{
	// xử lí
	int res = 1;
	int end = e[0];
	for (int i = 1; i < N; i++)
	{
		if (e[i] == end)//thoi gian ket thuc giong nhau
			continue;
		if (s[i] >= end)
		{
			res++; //neu thoi gian  bat dau lon hon hanh dong ket thuc thi ++res
			end = e[i];
		}
	}
	cout << res;
}
int main()
{
	cin>>N;
	for (int i = 0; i < N; i++)
	{
		cin >> s[i];
		cin >> e[i];
	}//nhập vào thời bắt đầu và kết thúc của task i
	qsort(e, 0, N - 1); // sort theo thời gian kết thúc
	proc(); // xử lí 
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
