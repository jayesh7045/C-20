#include<iostream>
using namespace std;
template<int threshold, typename b> bool isValid(b collection[], size_t size)
{
	b sum{};
	for (b i{}; i < size; i++)
	{
		sum += collection[i];
	}
	return (sum > threshold);
}
int main()
{
	int a{ 1 };
	int b{ 3 };
	int collection[] = { 1, 2, 4, 5, 6, 7 };
	cout << isValid<20, int>(collection, 6)<<endl;

	return 0;
}

// Here the value of 20 is known as the NonType Template Parameter
// In c++20, Non type template parameter can be of any basic built in type (bool, double, float, int, ....), enums type, pointer type, or reference type

// Any class type that has public members can also be used 
// In c++17 and below only int like types can be used as a Non type template parameters.
// Floating points and class type parameters values can come in handy in some applications

