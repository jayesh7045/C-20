#include<iostream>
using namespace std;
template<typename returntype = int, typename t, typename p> maximum(t a, p b)
{
	return ((a > b) ? a : b);
}
int main()
{
	double a{ 13.4 };
	double b{ 10 };
	auto d = maximum(a, b);
	cout << d << endl;
	auto c = maximum<double, double, double>(a, b);
	cout << c << endl;
	return 0;
}