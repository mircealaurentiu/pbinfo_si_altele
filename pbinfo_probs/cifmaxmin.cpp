#include <iostream>

using namespace std;
int mx(long long int n)
{
    int x=-1;
    while(n)
    {
        if(x<n%10)
            x=n%10;
        n/=10;
    }
    return x;
}

int mn(long long int n)
{
    int x=10;
    while(n)
    {
        if(x>n%10)
            x=n%10;
        n/=10;
    }
    return x;
}
long long int n;
int main()
{
    cin>>n;
    if(n<10)
        cout<<n;
    else
        cout<<mx(n)+mn(n);
    return 0;
}
