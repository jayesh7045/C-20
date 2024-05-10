#include<iostream>
using namespace std;


void solve()
{
    static int count = 0;
    count++;
    cout<<count<<endl;
}
int add(int x, int y)
{
    return x+y;
}
int main()
{
    // constexpr int ans = 3;
    // cout<<ans<<endl;
     int a = 0;
     int b = 10;
    const int i = add(a, b);
    // const int sol = add(1, 2);
    // cout<<sol<<endl;
    cout<<i<<endl;
    solve();
    solve();
    solve();
    solve();
    solve();
    return 0;
}