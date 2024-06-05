#include<iostream>
using namespace std;
template<typename a, typename b, typename c> a maximum(b var1, c var2)
{
	cout << var1 << " " << var2 << endl;
	return 0;
}
int main()
{
	int a{ 1 };
	double b{ 3.44 };
	string str{ "Jayesh Wadhwani" };
	bool x = true;
	int c = maximum<int, double>(a, b);
	int d = maximum<bool, int>(x, str);
	int e = maximum<int>(x, str);
	// int f = maximum<int, string>(a, str); --> This will give us an error because the return type must always be defined inside the <> brackets
	// Here in the above code the int is corresponding to the return type in the function call and not the return type first parameter of the function. Hence the second i.e string is corresponding to a which is actually an int. Hence it gives error that conversion from the int to string is not allowed in c++.
	// int g = maximum<bool, string>(a, str); --> This will give us an error because the return type must always be defined inside the <> brackets
	// int h = maximum(a, str); --> this will also give us an erro because we must define the type of the variables used in the function call


	// So the moral of the story is that we must define return type and if we want other we can. but atleast return type is must


	return 0;
}