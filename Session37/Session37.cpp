// Session37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<concepts>
using namespace std;
template<typename t>
requires integral<t>
t func(t a, t b)
{
    return a + b;
}
int main()
{
    std::cout << "Hello World!\n";
}

// This is the tutorial for Smart Pointers
// In this we will be discussing about the smart pointers

// Smart pointers helps us in 2 ways
// --> At any given moment there can only be a single pointer pointing to a particular value
// --> Memory is automatically released when the pointer goes out of scope

// 1. In order to allocate the memory dynamically, we make the use of the new operator and the delete operator.
 

// 2. And if we are doing that then manually deallocating the memory is also an imp task.


// 3. Manually releasing the memory yourself through the delete operator for raw pointers is a pain in the neck. 
// Smart pointers are a solution offered by modern C++ to release the memory automatically when the pointer managing the memory out of scope.


// 4. Smart pointers are like the static variables. As in the static variables, if the variable goes out of scope then the delete operator 
// for that variable is automatically called and space allocated for that object is deleted.


// In C++, smart pointers are template classes provided by the Standard Library 
// that manage the lifetime of dynamically allocated objects. They are designed 
// to ensure that dynamically allocated memory is properly released when it is 
// no longer needed, thus preventing memory leaks and other resource management 
// issues. 


// We will be discussing, 3 types of smart pointers in this complete session
// 1. std::unique_ptr
// 2. std::shared_ptr
// 3. std::weak_ptr



