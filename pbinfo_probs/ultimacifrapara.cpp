#include <iostream>

using namespace std;
int ucp(long long int n)
{
    while(n)
    {
        if(n%10%2==0)
            return n%10;
        n/=10;
    }
    return -1;
}
long long int n;
int main()
{
    cin>>n;
    if(n)
        cout<<ucp(n);
    else
        cout<<0;
    return 0;
}
