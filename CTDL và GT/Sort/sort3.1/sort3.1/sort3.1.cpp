#include<iostream>
using namespace std;
void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void selectionSort(int a[], int n)
{
	int indexMax;
	for (int i = 0; i < n - 1; i++)
	{
		int s = i + 1;
		indexMax = i;
		int max1 = a[indexMax];
		for (int j = i + 1; j < n; j++)
			if (a[indexMax] < a[j])
			{
				indexMax = j;
				max1 = a[j];
			}
		if (i != indexMax)
		{
			int temp = a[i];
			a[i] = a[indexMax];
			a[indexMax] = temp;
		}
		cout << "i=" << i <<":"<<endl;
		cout << "Max = a[" << indexMax << "] = " << max1 << endl;
		cout << "Mang sau khi sap xep " << s << " phan tu dau tien la: ";
		printArray(a, n);
		cout << endl;
	}
}
int a[1001];
int main() {
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << "Mang rong.";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Mang truoc khi sap xep la: ";
	printArray(a, n);
	cout << endl;
	selectionSort(a, n);
	cout << "Mang sau khi sap xep la: ";
	printArray(a, n);

	return 0;
}