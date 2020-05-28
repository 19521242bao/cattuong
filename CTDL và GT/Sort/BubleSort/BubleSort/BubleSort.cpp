#include<iostream>

using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void bubbleSort(int a[], int n) {
	bool swapper = true;
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				swapper = false;
			}
		}
		if (swapper) {
			break;
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
	bubbleSort(a, n);
	printArray(a, n);

	return 0;
}