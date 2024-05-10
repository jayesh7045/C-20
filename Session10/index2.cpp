#include<iostream>
using namespace std;
int main()
{
    unsigned char unsigned_char {53u};
    cout << "unsigned_char: " << unsigned_char << endl;
    


    // 2 Bytes
    short short_var {-32768};
    short int short_var_int{455};
    signed short signed_short{122};
    signed short int signed_short_int {-878};
    unsigned short int unsigned_short_int {5656U};
    cout<<short_var<<endl;
    cout<<short_var_int<<endl;
    cout<<signed_short<<endl;
    cout<<signed_short_int<<endl;
    cout<<unsigned_short_int<<endl;


    // 4 Bytes
    const int int_var {123456789};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned unsigned_var {88};
    unsigned int unsigned_int {99};
    cout<<int_var<<endl;
    cout<<signed_var<<endl;
    cout<<signed_int<<endl;
    cout<<unsigned_var<<endl;
    cout<<unsigned_int<<endl;


    // 4 or 8 Bytes
    long int long_int {839483948L};
    cout<<long_int<<endl;

    long long_var{839483948L};
    cout<<long_var<<endl;

    // unsigned, signed as well 

    // 8 Bytes
    // Same is there for 8 Bytes data which is long long
    unsigned int prize {1'5000'000'0};

    cout<<prize<<endl;
    return 0;
}