#include<iostream>
using namespace std;
int main()
{
	int a{ 14 };
	double b{ 10.333 };
	cout << sizeof(decltype((a > b) ? a : b)) << endl;
	decltype((a > b) ? a : b) c{ 64 };
	cout << c << endl;
	cout << sizeof(c) << endl;

	return 0;
}