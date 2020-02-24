
// xaucon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Xauduynhat - Xâu duy nhất
//
//Dữ liệu vào : standard input
//Dữ liệu ra : standard output
//Giới hạn thời gian : 1.0 giây
//Giới hạn bộ nhớ : 128 megabyte
//Đăng bởi : phuleethanh
//
//Cho một xâu kí tự chỉ gồm các kí tự chữ cái.Do yêu thích tính đơn nhất nên Nam muốn tìm ra một xâu con gồm các kí tự liên tiếp sao cho trong xâu này mỗi kí tự chỉ xuất hiện đúng 1 lần duy nhất.
//
//Bạn được Nam nhờ giúp đỡ, hãy tìm giúp nam xâu đạt yêu cầu có độ dài lớn nhất sẽ là bao nhiêu.
//
//Input :
//
//	-Gồm một dòng duy nhất là xâu ban đầu S(độ dài <= 5 * 104)
//
//	Output :
//
//	-Gồm một số duy nhất là đáp án tìm được.
//
//	Ví dụ
//	input
//	acbE
//	output
//	4

#include <iostream>
#include<string>
#include<algorithm>


using namespace std;
 int main() {
	string a;
	cin >> a;
	long long  min = -1, ans = 0;
	for (long long  i = 1; i < a.size(); i++) {
		int j = i - 1;
		while (j > min) {
			if (a[i] == a[j]) {
				break;
			}
			j--;
		}
		min = j;
		ans = max(ans, i - j);
	}
	cout << ans;
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
