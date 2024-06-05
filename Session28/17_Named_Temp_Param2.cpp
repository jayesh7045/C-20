#include<iostream>
using namespace std;
int main()
{
	auto fun = []<typename T, typename P>(T a, P b)
	{
		return (a > b ? a : b);
	};
	auto ans = fun('c', 98);
	cout << ans << endl;

	return 0;
}