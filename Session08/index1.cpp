#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // long double fl = 1.2345678998748457945830493L;
    // float f2 = 1.2345678998748457945830493f;
    // double f3 = 1.2345678998748457945830493;

    // float f4 {1234345};
    // cout<<fl;
    // // cout<<setprecision(2)<<endl;
    // cout<<f2<<endl;
    // cout<<f3<<endl;
    // cout<<sizeof(fl)<<endl;
    // cout<<sizeof(f2)<<endl;
    // cout<<sizeof(f3)<<endl;
    // float f5 {5e-2};
    // cout<<f5<<endl;
    // cout<<sizeof(f5)<<endl;
    cout<<setprecision(20)<<endl;
    float x {-3.4e-38};
    cout<<x<<endl;
    cout<<sizeof(x);
    cout<<endl;
    double y {1.11111e308};
    cout<<endl;
    long double z {4.111111111111L};
    cout<<z<<endl;
    cout<<y<<endl;

    long double u  = 4989898989898989984;
    cout<<u<<endl;
    return 0;
}
