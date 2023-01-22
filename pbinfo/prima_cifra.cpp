#include <iostream>

using namespace std;
int prima(int n)
{
    while(n>=10)
        n/=10;
    return n;
}
int n, i, x, s;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        s+=prima(x);
    }
    cout<<s;
    return 0;
}
