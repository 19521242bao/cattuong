// candy2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Sau khi vượt qua vòng gửi xe, sơ khảo lẫn áo tắm của cuộc thi bé khoẻ bé ngoan, Minh lại tiếp tục luyện tập về phép cộng và lần này sẽ khó khăn hơn.Bố Minh cho cậu n cái túi rỗng được đánh số từ 1 đến n với mỗi lượt, bố minh sẽ bỏ vào túi i đến túi j mỗi túi 1 cái kẹo(1 ≤ i ≤ j ≤ n).Nhiệm vụ của Minh sau đó là cho biết mỗi túi có bao nhiêu cái kẹo.
//
//Ví dụ
//
//add = [[1, 2], [1, 3], [2, 4]] và n = 5 thì sumCandy1(add, n) = [2, 3, 2, 1, 0]
//Giải thích : [0, 0, 0, 0, 0] --(1, 2)->[1, 1, 0, 0, 0] --(1, 3)->[2, 2, 1, 0, 0]--(2, 4)->[2, 3, 2, 1, 0]
//add = [[1, 2], [3, 3]] và n = 3 thì sumCandy1(add, n) = [1, 1, 1]
//Giải thích : [0, 0, 0] --(1, 2)->[1, 1, 0]--(3, 3)->[1, 1, 1]
//Đầu vào / Đầu ra :
//
//[Thời gian] 0.2s với C++, 1.2s với Java và C#, 1.6s với Python, Go và JavaScript.
//[Đầu vào] Arrays : Integer add, Integer n
//1 ≤ add.size() ≤ 100 000.
//1 ≤ a[i] ≤ n ≤ 10 000.
//[Đầu ra]  Integer
//Số nguyên duy nhất là kết quả của bài toán.
#include <iostream>
#include<vector>
using namespace std;
 void sumCandy2(std::vector<std::vector<int>> add, int n)
{
	int a1, a;
	vector<int>arr;
	for (int i = 0; i < n; i++)
		arr.push_back(0);
	for (int i = 0; i < add.size(); i++)
	{
		a = add[i][0]-1;
		a1 = add[i][1];
		for (int j = a; j < a1; j++)
			arr[j] += 1;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	std::vector<std::vector<int>> add{ {1,2},{1,3},{2,4} };
	int n;
	cin >> n;
	sumCandy2(add, n);

}
