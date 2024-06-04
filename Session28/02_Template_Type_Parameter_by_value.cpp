#include<iostream>
using namespace std;
template<typename t> t maximum(t a, t b)
{
	cout << "In - &a : " << &a << endl;
	return (a > b) ? a : b;
}
int main()
{
	int a{ 2 };
	int b{ 4 };
	cout << "Out - &a : " << &a << endl;
	int maxi = maximum(a, b);
	cout << maxi << endl;
	return 0;
}