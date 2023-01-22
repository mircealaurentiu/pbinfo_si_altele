#include <iostream>

using namespace std;
int a, b, d, s, x, y;
int main()
{
    cin>>a>>b>>d;
    if(a%d==0)
        x=a/d;
    else
        x=a/d+1;
    if(b%d==0)
        y=b/d;
    else
        y=b/d+1;
    cout<<x*y;
    return 0;
}
