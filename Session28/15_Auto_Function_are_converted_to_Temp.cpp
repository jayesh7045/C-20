#include<iostream>
using namespace std;
template<typename a> a maximum(a x, a y)
{
	return (x > y ? x : y);
}

auto max_fun(auto a, auto b)
{
	return (a > b ? a : b);
}
int main()
{
	int a{ 4 };
	int b{ 5 };
	cout << maximum<double>(a, b)<<endl;
	return 0;
}

// The auto function declaration is internally converted to templates only, hence both the template and the auto function above are exactly same