#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<typename t> t maximum(t a, t b)
{
	return (a > b) ? a : b;
}
template<>
const char* maximum<const char*>(const char* a, const char* b)
{
	return (strcmp(a, b) > 0) ? a : b;
}
int main()
{
	const char* str1{"Jayesh Wadhwani" };
	const char* str2{ "Hello World" };
	cout << &str1 << " " << &str2 << endl;

	cout << maximum(str1, str2) << endl;


	return 0;
}

// Outputs  --> Jayesh Wadhwani Because it compares the actual string values.