#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto v1 {9.77l};
    cout<<typeid(v1).name()<<endl;


    auto v2 {99u};    //unsigned integer;
    auto v3 {12.0f};  //float
    auto v4 {123ul};  // unsigned long
    auto v5 {333ll};  // long long
   


    return 0;
}