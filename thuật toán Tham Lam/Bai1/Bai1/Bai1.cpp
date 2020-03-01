//Các bài toán tham lam
//Bài toán trồng cây
//Problem : Một nông dân đang muốn trồng hoa vào khu vườn của mình.Để cho khu vườn trở nên thật màu sắc ông quyết định trồng nhiều loài hoa khác nhau vào khu vườn.Mỗi loài hoa có 1 cách trồng khác nhau do đó ông sẽ trồng từng loài hoa vào các ngày liên tiếp nhau.Cháu của ông rất mong chờ được thấy tất cả loài hoa trong khu vườn đều nở hoa trông sẽ tuyệt vời như thế nào.Tuy nhiên mỗi loài hoa lại có thời gian phát triển từ lúc trồng tới lúc nở hoa khác nhau.Nhiệm vụ của bạn là giúp ông nông dân tìm ra ngày sớm nhất mà tất cả loài hoa đều nở hoa.
//	Trong kho của ông nông dân hiện tại có một số loài hoa
//
//	Loài hoa	Thời gian hoa sẽ nở
//	1	Hoa hồng	3
//	2	Hoa lan	4
//	3	Hoa cúc	2
//	4	Hoa mười giờ	1
//	Idea: Mỗi cách trồng là 1 hoán vị của N(N là số loài hoa) với mỗi cách trồng sẽ cần một thời gian chờ để tất cả loài hoa đều nở.Ví dụ
//	Với hoán vị 1234 :
//
//	Trồng hoa hồng(1) vào ngày thứ 1 = > sau 1 + 3 = 4 ngày hoa sẽ nở
//	Trồng hoa lan(2) vào ngày thứ 2 = > sau 2 + 4 = 6 ngày hoa sẽ nở
//	Trồng hoa cúc(3) vào ngày thứ 3 = > sau 3 + 2 = 5 ngày hoa sẽ nở
//	Trồng hoa mười giờ(1) vào ngày thứ 4 = > sau 4 + 1 = 5 ngày hoa sẽ nở
//	Thời gian sớm nhất tất cả loài hoa đều nở là ngày thứ 7
//	Với hoán vị 2134:
//Thời gian sớm nhất tất cả loài hoa đều nở là ngày thứ 6
//Dễ thấy với các loài hoa có thời gian phát triển lâu cần được trồng trước các loài hoa phát triển nhanh(tham lam) = > Sort theo thứ tự giảm dần thời gian phát triển của hoa để sinh ra hoán vị tốt nhất.
#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	int a[1001];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	// sap xep cac loai hoa trong lau nhat
	sort(a, a + n);
	int res = 1, j = 1;
	for (int i = n - 1; i >= 0; i--)
	{
		a[i] += j++;//so ngay toi thieu de cay trong lau nhat no hoa
		if (res < a[i])//neu so ngay toi thieu nho hon thi gan lai
			res = a[i];
	}
	cout << res;
}

