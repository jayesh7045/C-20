#include<iostream>
using namespace std;
int main()
{
    bool a{true};
    bool b{false};
    cout<<boolalpha<<endl;
    cout<<a<<" "<<b<<endl;
    if(a)
    {
        cout<<"A is true"<<endl;
    }
    else 
    {
        cout<<"A is false"<<endl;
    }
    return 0;
}

// booleans occupy the 8 bits in the memory