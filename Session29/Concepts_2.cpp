#include<iostream>
#include<concepts>
using namespace std;
template<typename t>
t addfun(t a, t b)
	requires convertible_to<t, double> {
	return a + b;
}
int main()
{
	int a{ 2};
	int b{ 4 };


	double c{ 2.333 };
	double d{ 4.4444 };
	cout << addfun(a, b) << endl;
	cout << addfun(c, d) << endl;

	return 0;
}

// In the prev code file, we were only able to use the params that can be convertible to int.
// Here we are using the double as well in the code.
//This is the more generalized code which says that here we can make the use of any dtype which can be converted to double.
// i.e int, double, char and not strings