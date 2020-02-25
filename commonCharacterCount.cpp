// C++ implementation of the approach 
#include <iostream>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;
//Cho hai xâu kí tự, tìm số lượng kí tự chung giữa chúng.
//
//Ví dụ :
//
//Với s1 = "aabcc" và s2 = "adcaa", thì kết quả commonCharacterCount(s1, s2) = 3.
//2 xâu s1 và s2 có 3 kí tự chung : 2 kí tự 'a' và 1 kí tự 'c'.
//Đầu vào / Đầu ra :
//
//[Thời gian chạy] 0.5 giây
//
//[Đầu vào] string s1, s2
//
//Xâu kí tự chỉ chứa các kí tự chữ cái in thường, in hoa
//
//Điều kiện :
//1 ≤ s1.length, s2.length < 15.
//
//	[output] integer
//
//	Lý thuyết
//	Mảng tần suất - frequency array
//
//	Định nghĩa : Mảng tần suất - frequency array là mảng dùng để kiếm soát số lần xuất hiện của một giá trị trong một mảng cho trước
//
//	Cách xây dựng : Cho trước một dãy số A.Tìm mảng B là mảng tần suất ứng với dãy A
//
//	Lần lượt xét các chỉ số i mà 0 <= i < A.size() rồi tăng giá trị của B[A[i]] lên một đơn vị.
//	vector<int> frequencyArray(vector<int> A) {
//	for (int i = 0; i < (int)A.size(); ++i) B[A[i]]++;
//	return B;
//}
//Ví dụ minh họa thuật toán : Với A = [1, 2, 3, 3, 1, 1] thì
//
//Xét i = 0 thì B[A[0]] tăng lên 1 đơn vị nên B[1] = 1
//Xét i = 1 thì B[A[1]] tăng lên 1 đơn vị nên B[2] = 1
//Xét i = 2 thì B[A[2]] tăng lên 1 đơn vị nên B[3] = 1
//Xét i = 3 thì B[A[3]] tăng lên 1 đơn vị nên B[3] = 2
//Xét i = 4 thì B[A[4]] tăng lên 1 đơn vị nên B[1] = 2
//Xét i = 5 thì B[A[5]] tăng lên 1 đơn vị nên B[1] = 3
//Độ phức tạp : O(n)
//
//Một số ứng dụng cơ bản :
//
//Kiểm tra một số có xuất hiện trong dãy không ?
//Tìm số lần xuất hiện của một số trong dãy
//Áp dụng cho một số thuật toán sắp xếp(Counting sort)
// Function to return the count of 
// valid indices pairs 
int commonCharacterCount(std::string s1, std::string s2)
{
	int n1 = s1.length();
	int n2 = s2.length();
	// To store the frequencies of characters 
	// of string s1 and s2 
	int freq1[26] = { 0 };
	int freq2[26] = { 0 };

	// To store the count of valid pairs 
	int i, count = 0;

	// Update the frequencies of 
	// the characters of string s1 
	for (i = 0; i < n1; i++)
		freq1[s1[i] - 'a']++;

	// Update the frequencies of 
	// the characters of string s2 
	for (i = 0; i < n2; i++)
		freq2[s2[i] - 'a']++;

	// Find the count of valid pairs 
	for (i = 0; i < 26; i++)
		count += (min(freq1[i], freq2[i]));

	return count;
}

// Driver code 
int main()
{
	string s1 = "geeksforgeeks", s2 = "platformforgeeks";

	cout << commonCharacterCount(s1, s2);

	return 0;
}