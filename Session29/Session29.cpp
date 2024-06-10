// Session29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<concepts>
using namespace std;
template<typename t>
requires integral<t>
t fun(t a, t b) {
    return a + b;
}
int main()
{
    std::cout << "Hello World!\n";
    cout<<"This is the video for concepts" << endl;
    int a{ 1 };
    int b{ 10 };
    cout<<fun(a, b)<<endl;
    float c{ 1.34 };
    float d{ 4.677 };
    char r{ 'b' };
    char s{ 'a' };
    char sol = (fun(r - 'a', s - 'a'))+97;
    cout << sol << endl;
    
}

