#include<iostream>
using namespace std;
template<typename a, typename b> decltype(auto) maximum(a x, b y)
{
	return ((x > y) ? x : y);
}
int main()
{
	int a{ 1 };
	int b{ 10 };
	int c = maximum(a, b);
	return 0;
}



/*
#include<iostream>
using namespace std;
template<typename a, typename b> decltype(auto) maximum(a x, b y);
int main()
{
	int a{ 1 };
	int b{ 10 };
	int c = maximum(a, b);
	return 0;
}
template<typename a, typename b> decltype(auto) maximum(a x, b y)
{
	return ((x > y) ? x : y);
}

*/
// We can not split the code into function declaration and definition

// The above code will give you an error.
