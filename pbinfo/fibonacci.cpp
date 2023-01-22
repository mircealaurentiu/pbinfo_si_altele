#include <iostream>

using namespace std;
int n, i, a, b, c;
int main()
{
    cin>>n;
    a=b=1;
    c=a+b;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    cout<<a<<" "<<b<<" ";
    for(i=3;i<=n;i++)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
