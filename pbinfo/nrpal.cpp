#include <iostream>

using namespace std;
int este(int n)
{
    int x=0, m;
    m=n;
    while(n)
    {
        x=x*10+n%10;
        n/=10;
    }
    if(x==m)
        return 1;
    return 0;
}
int a, b, k=0, i;
int main()
{
    cin>>a>>b;
    if(a>b)
        swap(a,b);
    for(i=a;i<=b;i++)
        if(este(i)!=0)
            k++;
    cout<<k;
    return 0;
}
