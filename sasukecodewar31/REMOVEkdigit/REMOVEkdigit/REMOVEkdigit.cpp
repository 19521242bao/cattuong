



#include <stack>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

// A recursive function that removes 'n' characters from 'str' 
// to store the smallest possible number in 'res' 
 
// Driver program to test above function 
int main()
{
	string str = "32786621179027480247";
	int n = 10;
	cout << deleteChar(str , n);
	return 0;
}