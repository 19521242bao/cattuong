#include<iostream>

using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void selectionSort(int a[], int n)
{
	int indexMin;
	for (int i = 0; i < n - 1; i++)
	{
		indexMin = i;
		for (int j = i + 1; j < n; j++)
			if (a[indexMin] > a[j])
				indexMin = j;
		if (i != indexMin)
		{
			int temp = a[i];
			a[i] = a[indexMin];
			a[indexMin] = temp;
		}
	}
}
int a[100001];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	selectionSort(a, n);
	printArray(a, n);

	return 0;
}