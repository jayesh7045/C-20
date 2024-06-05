 #include<iostream>
using namespace std;
template<typename a, typename b> auto sol(a x, b y) -> decltype((x > y) ? 1 : 0); // This is known as trailing return type for the functions..

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

// So as we saw that we were not able to write a code as declaring the function template and not defining it but using it and then defining it. 
// This is ok if we are specifing the return type, but if we are not specifing the return type and using auto then its not possible
// But its again possible by using the decltype

// We can not code like
// template<typename T, typename P> decltype((a > b) ? a:b) int maximum(T a, T b){ return (a > b) ? a : b};
// Because the compiler process from left to right and in the expression decltype((a > b)?a:b), the compiler has no idea about the data types of the a and b and hence it wont work because the dtype of a and b are defined in the next section as maximum(T a, T b);

