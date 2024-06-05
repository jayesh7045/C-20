#include<iostream>
using namespace std;
template<typename a, typename b, typename returntype> returntype print(a x, b y)
{
	cout << "a : " << x << " b: " << y << endl;
	return 0;
}
int main()
{
	int a{ 1 };
	int b{ 4 };
	string c{ "Jayesh Wadhwani" };
	string d{ "PCCOER" };
	int u = print<int, string, int>(a, c);

	return 0;
}