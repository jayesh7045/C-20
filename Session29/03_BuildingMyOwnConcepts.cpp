#include<iostream>
#include<concepts>
using namespace std;
template<typename t>
concept myIntegral = is_integral_v<t>;


template<typename t>
concept myIntegral2 = requires(t a, t b) {
	a + b; // Here we are specifing to the compiler that consider only those params those can support the addition operator
};

template<typename t>
concept myIntegral3 = requires(t a, t b)
{
	a* b; // We are tellinf to our compiler to take only those params those can support the multiplication function.
};


template<typename t>
concept myIntegral4 = requires(t a, t b)
{
	a++; // We are tellinf to our compiler to take only those params those can support the increment function.
	a += 1;
	b += 1;
};



// Using you custom Concept
template<typename t>
t addN(t a, t b)
	requires myIntegral4<t> {
	return a + 1;
}
int main()
{
	cout << "Hello World" << endl;
	int x = 5;
	int ans = addN(x, 5);
	cout << ans << endl;
	return 0;
}


// All the types of syntax that we used with the concepts can be used with Custom Concepts as well.