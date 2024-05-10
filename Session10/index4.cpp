#include<iostream>
using namespace std;
int main()
{
    const int a = 0;
    constexpr int b {a};
    cout<<a<<endl; 
    return 0;
}