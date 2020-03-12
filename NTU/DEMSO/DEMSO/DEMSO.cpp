// DEMSO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define max 100000
bool a[100005];
long long kq[100005];
using namespace std;
void sang(long long n)
{
	long long i, j;
	for (int i = 1; i <= n; i++)
	{
		a[i] = true;// gan moi phần tử ban đầu đều đúng
		kq[i] = 1;// ton tai ít nhaart một số thõa đề bài
	}
	a[1] = false;// 1 ko là nguyên tố
		for( i=2;i<=n/2;i++)
			if (a[i] == true)//kt a[i] la số nguyên tố
			{
				//sàng nguyên tố
				for(j=2;j<=n/i;j++)
					if (a[i * j] == true)
					{
						a[i * j] = false;
						kq[i] += 1;// cộng lần luotj các số có a[i[ la ước nt nhỏ nhất
					}
			}
}
int main()
{
	long long i, n, tam;
	cin >> n;
	sang(max);
	for (int i = 1; i <= n; i++)
	{
		cin >> tam;
		if (tam < max)
			cout << kq[tam] << endl;
		else
			cout << "0" << endl;
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
