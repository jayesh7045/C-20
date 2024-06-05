#include<iostream>
using namespace std;
template<typename a, typename b> auto maximum(a x, b y)
{
	return (x > y) ? x : y;
}
int main()
{
	cout << "Hello world" << endl;
	int a{ 5 };
	double b{ 4.5 };
	auto t = maximum(a, b);
	cout << t << endl;
	auto r = maximum(90, 'h');
	cout << r << endl;
	// Here the return type will be deduced by the compiler itself
	return 0;
}