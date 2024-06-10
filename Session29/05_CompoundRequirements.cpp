#include<iostream>
#include<concepts>
using namespace std;

template<typename t>
concept myConcept = requires(t a, t b)
{
	{ a + b } noexcept->convertible_to<int>;
};
int main()
{
	int a{ 4 };
	int b{ 10 };
	cout << a << " " << b << endl;

	return 0;
}


/*
	template<typename t>: Declares a template parameter t.
	concept myConcept: Defines a concept named myConcept which applies constraints to the type t.
	requires(t a, t b): Specifies the requirements that types t must satisfy to meet the myConcept.
	{ a + b } noexcept -> convertible_to<int>:
	a + b must be a valid expression.
	The expression a + b must not throw exceptions (noexcept).
	The result of a + b must be convertible to int.
*/