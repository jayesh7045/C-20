#include<iostream>
using namespace std;
int main()
{
	auto fun = [](auto a, auto b)
	{
		return (a > b ? a : b);
	};
	int x{ 9 };
	double y{ 9.3444 };
	auto ans = fun(x, y);
	cout << ans << endl;
	



	auto fun1 = []<typename t>(t a, t b)
	{
		return (a > b ? a : b);
	};
	int w = 10;
	int f = 11;
	auto ans1 = fun1(w, f);
	cout << ans1 << endl;

	return 0;
}
// The above concept is known as the Named Template Parameter for lamdas
// In the above case we can pass params of 2 different data types or as well of same datatype

// But if we want to have restriction that the parameters must be of the same data type then we must use the template like syntax
// auto fun = []<typename T>(T a, T b)
// {
//	return (a > b ? a : b);
// }