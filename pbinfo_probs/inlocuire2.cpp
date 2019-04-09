#include <iostream>

using namespace std;
int inl(long long int n, int c1, int c2)
{
    int x=0, p=1, u;
    if(n==0)
        return c2;
    while(n)
    {
        u=n%10;
        if(u==c1)
            x=x+c2*p;
        else
            x=x+u*p;
        p*=10;
        n/=10;
    }
    return x;
}
long long int n;
int c1, c2;
int main()
{
    cin>>n>>c1>>c2;
    cout<<inl(n,c1,c2);
    return 0;
}
