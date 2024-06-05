#include<iostream>
using namespace std;
int main()
{
	cout << boolalpha << endl;
	int a{ 45 };
	cout << is_integral<int>::value << endl;
	cout << is_integral<float>::value << endl;
	cout << is_integral<bool>::value << endl;
	cout << is_integral<double>::value << endl;
	cout << is_floating_point<float>::value << endl;
	cout << is_floating_point<int>::value << endl;
	return 0;
}