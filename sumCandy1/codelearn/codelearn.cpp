// codelearn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Minh chuẩn bị dự thi bé khoẻ bé ngoan, bố Minh đang luyện tập về phép cộng cho cậu.Bố Minh cho cậu n cái túi rỗng được đánh số từ 1 đến n với mỗi lượt, bố minh sẽ bỏ vào túi i đến túi j mỗi túi 1 cái kẹo(1 ≤ i ≤ j ≤ n).Nhiệm vụ của Minh sau đó là cho biết mỗi túi có bao nhiêu cái kẹo.
//
//Ví dụ
//
//add = [[1, 2], [1, 3], [2, 4]] và n = 5 thì sumCandy1(add, n) = [2, 3, 2, 1, 0]
//Giải thích : [0, 0, 0, 0, 0] --(1, 2)->[1, 1, 0, 0, 0] --(1, 3)->[2, 2, 1, 0, 0]--(2, 4)->[2, 3, 2, 1, 0]
//add = [[1, 2], [3, 3]] và n = 3 thì sumCandy1(add, n) = [1, 1, 1]
//Giải thích : [0, 0, 0] --(1, 2)->[1, 1, 0]--(3, 3)->[1, 1, 1]
//Đầu vào / Đầu ra :
//
//[Thời gian] 0.5s với C++, 3s với Java và C#, 4s với Python, Go và JavaScript.
//[Đầu vào] Arrays : Integer add, Integer n
//1 ≤ add.size() ≤ 1000.
//1 ≤ a[i] ≤ n ≤ 10000.
//[Đầu ra]  Integer
//Số nguyên duy nhất là kết quả của bài toán.
#include <iostream>
#include<vector>
using namespace std;
std::vector<int> sumCandy1(std::vector<std::vector<int>> add, int n)
{

	vector<int>a;
	vector<int>b;
	int s1;
	int k = 0;
	for (int i = 0; i < n; i++)
		a.push_back(0);
	int s;
	for (int i = 0; i < add.size(); i++)
	{
		s = add[i][0] - 1;
		s1 = add[i][1];
		for (int j = s; j<s1; j++)
		{
			a[j] += 1;
		}
	}

	return a;
}

int main()
{
	vector<std::vector<int>> add{ {1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1},{1,1} };
	int n;
	cin >> n;
	sumCandy1(add, n);
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
