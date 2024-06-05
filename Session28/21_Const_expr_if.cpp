#include<iostream>
using namespace std;
template<typename t>  void fun(t a) {
	if (constexpr(is_integral_v<t>))
	{
		fun1();
	}
	else if (constexpr(is_floating_point<t>::value))
	{
		fun2();
	}
	else
	{
		static_assert(is_integral<t>::value || is_floating_point<t>::value, "Provide either int ot float");
	}
}
void fun1() {
	cout << "fun1 is called" << endl;
}
void fun2() {
	cout << "fun2 is called" << endl;
}
int main()
{
	int t{ 4 };
	float y{ 3 };
	fun(t);

	return 0;
}