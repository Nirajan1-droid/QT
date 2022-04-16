#include <iostream>
using namespace std;

int main()
{
	long double cap1 = 536870912;
	long double cap2 = 2147483648;
	long double cap = cap1 + cap2;
	long double ram = cap / 1073741824;
	cout << ram << endl;
	return 0;
}