// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Một xâu ký tự được gọi là cool nếu nó được hình thành bởi các chữ cái tiếng Anh và không có 2 chữ cái thường hay 2 chữ cái hoa nào ở vị trí liền nhau.Cho một xâu, kiểm tra xem nó có phải là một xâu cool không.
//
//Ví dụ
//
//Với inputString = "aQwFdA", đầu ra là
//coolString(inputString) = true;
//Với inputString = "aAA", đầu ra là
//coolString(inputString) = false;
//Với inputString = "q q", đầu ra là
//coolString(inputString) = false.
//Đầu vào / Đầu ra
//
//[giới hạn thời gian chạy] 0.5 giây
//
//[đầu vào] string inputString
//
//Điều kiện tiền đề :
//1 ≤ inputString.length ≤ 100.
//
//[đầu ra] boolean
//
//true nếu inputString là cool, false nếu không phải.
#include <iostream>
#include<string>
using namespace std;
int check(string a,int i)
{
	if (a[i] >= 'a' && a[i] <= 'z')
		return 1;
	if (a[i] >= 'A' && a[i] <= 'Z')
		return -1;
	return 0;
}
bool coolString(std::string inputString)
{
	int s;
	for (int i = 1; i < inputString.length(); i++)
	{
		
		s = check(inputString,i) * check(inputString,i-1);
		if (s != -1)
			return false;
	}
	return true;
}
int main()
{
	string a;
	getline(cin, a);
	cout << coolString(a);
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
