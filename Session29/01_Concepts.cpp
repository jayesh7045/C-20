// Session29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<concepts>
using namespace std;


// Syntax 1
/* template<integral t>
t fun(t a, t b) {
    return a + b;
}
*/



// syntax 2
template<typename t>
requires integral<t>
t fun(t a, t b) {
    return a + b;
}



/*
// syntax 3
template<integral t>
t fun(t a, t b) requires integral<t>{
    return a + b;
}
*/


/*
// syntax 4
t fun(t a, t b) requires integral<t>{
    return a + b;
}
*/



int main()
{
    std::cout << "Hello World!\n";
    cout << "This is the video for concepts" << endl;
    int a{ 1 };
    int b{ 10 };
    cout << fun(a, b) << endl;
    float c{ 1.34 };
    float d{ 4.677 };
    char r{ 'b' };
    char s{ 'a' };
    int sol = fun(a, b) + 97;
    cout << sol << endl;
    return 0;
}



// In this session we discussed on the ways in which we can define a function template which is restricted to work only on the integral types of input values. If we will try to use it with the chars then it will work because
// the chars are convertible to int's but as strings are not convertible to ints we can not use it.
s
// We can not use the floats or doubles as the parameters for the function because those can not be connot be converted to int. 