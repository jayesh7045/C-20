#include<iostream>
#include<cstring>
using namespace std;
template<typename t> t maximum(t a, t b)
{
	cout << "Fun1 is called" << endl;
	return (a > b) ? a : b;
}
const char* maximum(const char* a, const char* b)
{
	cout << "Fun2 is called" << endl;
	return (strcmp(a, b) > 0) ? a : b;
}
template<typename t> t* maximum(t* a, t* b)
{
	cout << "Fun3 is called" << endl;
	return (*a > *b) ? a : b;
}
int main()
{
	int d = 5;
	int e = 10;
	int* a = &d;
	int* b = &e;
	int* r = maximum(a, b);

	string x{ "Jayesh" };
	string y{ "Wadhwani" };
	const char* w = "PTC";
	const char* v = "Kalyani nagar";

	maximum(x, y);


	auto res3 = maximum(w, v);
	cout << res3 << endl;
	return 0;
}