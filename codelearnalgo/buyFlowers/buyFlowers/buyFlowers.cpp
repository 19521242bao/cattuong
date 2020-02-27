//Dịp 8 / 3 sắp đến Bình dự định sẽ mua hoa tặng cho nàng thơ của mình.Gần đó có một cửa hàng hoa có bán 2 loại hoa là cúc vạn thọ(giá marigold đồng m đóa) và hoa hồng(giá rose đồng 1 đóa).Vì lười đi xa nên Bình chọn cửa hàng này để mua.Bình muốn mua n đóa hoa tặng nàng, giúp Bình chọn hoa với chi phí rẻ nhất nhé.
//
//Đề bài : Cho cúc vạn thọ giá marigold đồng / m đóa, hoa hồng giá rose đồng / 1 đóa.Tìm chi phí ít nhất để mua từ đủ n đóa hoa.
//
//Ví dụ :
//
//marigold = 3, rose = 2, m = 2, n = 5. buyFlowers(marigold, rose, m, n) = 8. Vì ta chọn mua 4 đóa cục vạn thọ với giá 3 đồng 2 đóa và 1 đóa hồng -> 2 * 3 + 2 = 8 đồng.
//marigold = 1, rose = 2, m = 2, n = 5. buyFlowers(marigold, rose, m, n) = 3. Vì ta chọn mua 6 đóa cục vạn thọ với giá 1 đồng 2 đóa -> 3 * 1 = 3 đồng.Sau đó tặng nàng 5 đóa.
//Đầu vào / ra :
//
//	[Giới hạn thời gian] 0.5s với C++, 3s với Java & C#, 4s Python, GO và Js.
//
//	[Đầu vào] integer marigold, rose, m, n.
//	Giá các loại hoa theo các đơn vị
//
//	[Đầu ra] Integer
//	Số tiền ít nhất để mua n đóa h
#include <iostream>
#include<math.h>
#include<algorithm>
#include<functional>
using namespace std;
int buyFlowers(int marigold, int rose, int m, int n)
{
	int s1, s2,s3;
	float d = (float)(marigold / m);
	if (d > rose)
		return rose * n;
	int a = n / m;
	int b = n % m;
	if (b == 0)
	{
		return a * marigold;
	}
	s1 = (a + 1) * marigold;
	s2 = a * marigold + b * rose;
	return min(s1, s2);

}

int main()
{
	int marigold, rose, m, n;
	cin >> marigold >> rose >> m >> n;
	cout << buyFlowers(marigold, rose, m, n);
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
