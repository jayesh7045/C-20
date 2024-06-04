#include<iostream>
using namespace std;
template<typename t> t maxi(t a, t b)
{
	return (a > b) ? a : b;
}
int main()
{
	double a{ 3.444 };
	double b{ 3.555 };
	int c{ 1 };
	int d{ 2 };
	
	cout << maxi<double>(a, d) << endl;

	return 0;
}

