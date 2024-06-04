#include<iostream>
using namespace std;
template<typename t> const t& maximumv(const t& a, const t& b)
{
	cout << "In - &a : " << &a << endl;
	return (a > b) ? a : b;
}
int main()
{
	const int a{ 2 };
	const int b{ 4 };
	cout << "Out - &a : " << &a << endl;
	int maxi = maximumv(a, b);
	cout << maxi << endl;
	return 0;
}