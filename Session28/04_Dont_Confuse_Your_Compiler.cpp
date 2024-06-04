#include<iostream>
using namespace std;
template<typename t> t maximum(t a, t b)
{
	cout << "In - &a : " << &a << endl;
	return (a > b) ? a : b;
}
template<typename t> const t& maximumv(const t& a, const t& b)
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

	

	const int c{ 2 };
	const int d{ 4 };
	cout << "Out - &c : " << &c << endl;
	int maxi2 = maximumv(c, d);
	cout << maxi2 << endl;
	return 0;


}


// The above code will throw error