#include<iostream>
#include<vector>
using namespace std;

struct index {
	long long x, y;
};

void printArray(long long a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void quickSort(long long a[], int l, int r,vector<index> &arr) {
	long long p = a[(l + r) / 2];
	int i = l, j = r;
	while (i <= j) {
		while (a[i] > p) 
			i++;
		
		while (a[j] < p) 
			j--;
		
		if (i <= j) {
			long long temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			if (i!=j)
			{
				index b;
				b.x = i+1;
				b.y = j+1;
				arr.push_back(b);
			}
			i++;
			j--;
			
		}
	}
	if (l < j) {
		quickSort(a, l, j,arr);
	}
	if (i < r) {
		quickSort(a, i, r,arr);
	}
	
}

int main()
{
	long long* a;
	vector<index>arr;
	int n;
	
	cin >> n;
	a = new long long[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Day truoc khi sap xep: ";
	printArray(a, n);
	cout << "Day sau khi sap xep: ";
	quickSort(a, 0, n - 1,arr);
	printArray(a, n);
	cout << "Cac hoan vi duoc thuc hien trong Quick Sort:"<<endl;
	for (int i = 0; i < arr.size(); i++)
			cout << arr[i].x<< " " << arr[i].y << endl;
	return 0;
}