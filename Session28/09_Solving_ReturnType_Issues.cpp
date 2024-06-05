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
	auto r = maximum(90, 'b');
	cout << r << endl;
	// Here the return type will be deduced by the compiler itself

	auto d = maximum<int, char>('o', 'i');
	cout << d << endl;
	return 0;
}


// vimp :-  If we are using the auto type deduction then we must provide the function definition before the actual use of the function
// Matlab upar declare kar diya aur bad me main khatam hone ke baad define kiya toh nhi chalge in case if we are using the auto deduction.