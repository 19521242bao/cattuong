
#include <iostream> 
#include<vector>
using namespace std;
struct index {
	long long x, y;
};
void heapify(long long arr[], int n, int i,vector<index>&b)
{
	int largest = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 
	if (l < n && arr[l] < arr[largest])
		largest = l;
	if (r < n && arr[r] < arr[largest])
		largest = r;
	if (largest != i)
	{
		index s;
		s.x = i;
		s.y = largest;
		b.push_back(s);
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest,b);
	}
}
void heapify1(long long arr[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && arr[l] < arr[largest])
		largest = l;
	if (r < n && arr[r] < arr[largest])
		largest = r;
	if (largest != i)
	{
		swap(arr[i], arr[largest]);
		heapify1(arr, n, largest);
	}
}


// main function to do heap sort 
void heapSort(long long arr[], int n,vector<index>&b)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i,b);
	for (int i = n - 1; i > 0; i--)
	{ 
		swap(arr[0], arr[i]);
		heapify1(arr, i, 0);
	}
}
void printArray(long long arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

// Driver program 
int main()
{
	vector<index>b;
	long long* arr;
	int n;
	cin >> n;
	arr = new long long[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Day truoc khi sap xep: ";
	printArray(arr, n);
	cout << "Day sau khi sap xep: ";
	heapSort(arr, n,b);
	printArray(arr, n);
	cout << "Cac hoan vi duoc thuc hien trong heap:" << endl;
	for (int i = 0; i < b.size(); i++)
		cout << b[i].x << " " << b[i].y<<endl;
}