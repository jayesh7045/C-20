#include<iostream>
using namespace std;
template<typename a, typename b> auto sol(a x, b y) -> decltype((x > y) ? 1 : 0);
int main()
{
	int a{ 1 };
	int b{ 10 };
	string s1{ "Jayesh" };
	string s2{ "Wadhwani" };
	int ans = sol(s2, s1);
	cout << ans << endl;
	return 0;
}
template<typename a, typename b> auto sol(a x, b y)->decltype((x > y) ? 1 : 0)
{
	return ((x > y) ? 1 : 0);
}