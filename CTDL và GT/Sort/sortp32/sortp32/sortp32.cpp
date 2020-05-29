

// sortp32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] < key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
		int k = j + 1;
		cout << "Vi tri chen cua a[" << i << "] la "<<k<<endl;
		printArray(arr, n);
		cout << endl;
	}
}
int main()
{
	int a[100];
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << "Mang rong.";
		return 0;
	}
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Mang truoc khi sap xep la: ";
	printArray(a, n);
	cout << endl;
	insertionSort(a, n);
	cout << "Mang sau khi sap xep la: ";
	printArray(a, n);


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
