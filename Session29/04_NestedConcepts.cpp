#include<iostream>
#include<concepts>
using namespace std;

template<typename t>
concept mySizeOfConcept = requires(t a)
{

	// Nested Concepts
	sizeof(t) <= 4;             // This is used only to evaluate the syntax and will not apply the concept constraints of size less than 4 on the input type
	requires (sizeof(t) <= 4);  // --> This is used to apply the concept constraint on the input provided to the function that the size of the input must be less than 4
};

template <typename t>
requires mySizeOfConcept<t>
t fun(t a, t b)
{
	return a + b;
};


int main()
{
	int a{ 4 };
	int b{ 5 };
	char c{ 'a' };
	char d{ 'e' };
	double e{ 3.45 };
	double f{ 3.78 };
	cout << fun(e, f) << endl;
	cout << fun(c, d)<<endl;
	cout << fun(a, b) << endl;
	return 0;
}

// Here the use of the double dtype in the fun will give us the error, but if we will change the requires constraint in the concept as sizeof(t) <= 8 then it will work.
// So sizeof(t) --> This can only be used to check the syntax but inorder to make it a
