
//Bình định nghĩa số hoàn hảo là một số nguyên dương mà có tổng các chữ số bằng 10. Hãy viết hàm giúp Bình xác định số hoàn hảo nhỏ nhất thứ k.
//
//Ví dụ
//
//Cho k = 1, output sẽ có dạng perfectNumber(k) = 19.
//Cho k = 2, output sẽ có dạng perfectNumber(k) = 28.
//Đầu vào / Đầu ra
//
//[Thời gian chạy] 0.5s với C++, 3s với Java và C#, 4s với Python, JS, GO
//[Đầu vào] integer k
//Điều kiện tiền đề :
//1 <= k <= 10000
//[Đầu ra] integer
//Số hoàn hảo nhỏ nhất thứ k.
#include <iostream>
using namespace std;
int digit(int n) {
	int ans = 0;
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}
	return ans;
}
int perfectNumber(int k)
{
	int n = 18, ans;
	while (k) {
		n++;
		if (digit(n) == 10) {
			ans = n;
			k--;
		}
	}
	return n;
}

int main()
{
	int k;
	cin >> k;
	cout << perfectNumber(k);
}
