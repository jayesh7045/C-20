#include<iostream>
using namespace std;
int main()
{
	auto fun = []<typename t>(t a, t b)
	{
		static_assert(is_integral<t>::value, "No a is not an int");
		cout << " a is : " << a << endl;
	};
	double a{ 4.66 };
	double b{ 10 };
	fun(a, b);

	return 0;
}