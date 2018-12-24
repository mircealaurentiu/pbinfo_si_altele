#include <iostream>

using namespace std;
int n, a, b, c;
int main()
{
    cin>>n;
    a=b=1;
    c=a+b;
    cout<<a<<" "<<b<<" ";
    while(c<=n)
    {
        cout<<c<<" ";
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
