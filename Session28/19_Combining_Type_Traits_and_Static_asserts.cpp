#include<iostream>
using namespace std;
template<typename t>
void fun(t a)
{
	static_assert(is_integral<t>::value, "The value is not an int");
	cout << "Program successfully Ended !!!";
}
int main()
{
	fun(4.444);
	return 0;
}