//Trang đang học về phép mod(phép chia lấy dư), ví dụ : 4 mod 5 = 4; 9 mod 6 = 3. Trang có một mảng số nguyên a và trang cần tìm giá trị lớn nhất của a[i] mod a[j](0≤i, j < a.size).
//
//(Dữ liệu đầu vào đảm bảo trong mảng luôn có phần tử khác 0).
//
//Ví dụ :
//
//Với a = [4, 8, 3, 1], thì maxMod(a) = 4.
//Giải thích : a[0] mod a[1] = 4.
//Với a = [6, 9, 6, 4, 7], thì maxMod(a) = 7.
//Giải thích : a[4] mod a[1] = 7.
//Đầu vào / Đầu ra :
//
//[Thời gian chạy] 0.5s với C++, 3s với Java và C#, 4s với Python, Go và JavaScript.
//
//[Đầu vào] Arrays : integer : a
//1 ≤ a.size() < 105.
//	1 ≤ a[i] < 2.109.
//	[Đầu ra] Integer
//	Giá trị lớn nhất của a[i] mod a[j](0≤i, j
#include <iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<math.h>
using namespace std;
int maxMod(std::vector<int> a)
{
	sort(a.rbegin(), a.rend());
	int res = 0;
	for (int i = 1; i < a.size(); ++i)
		res = max(res, a[i] % a[0]);
	return res;
}
int main()
{
	vector<int>a{ 2,13,52,123,12 };
   cout << maxMod(a);
}

