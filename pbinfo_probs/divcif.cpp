#include <iostream>

using namespace std;
int div(int n)
{
    int u, m;
    m=n;
    while(n)
    {
        u=n%10;
        if(u!=0)
            if(m%u!=0)
                return 0;
        n/=10;
    }
    return 1;
}
int a, b, i, k=0;
int main()
{
    cin>>a>>b;
    for(i=a;i<=b;i++)
        if(div(i))
            k++;
    cout<<k;
    return 0;
}
