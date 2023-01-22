#include <iostream>

using namespace std;

int sameLen(int n, int m)
{
    int u=0, k=0;
    while(n)
    {
        n/=10;
        u++;
    }

    while(m)
    {
        m/=10;
        k++;
    }

    return u==k ? 1 : 0;
}

int n, m, a[11], i, j, k;

int main()
{
    cin>>n>>m;
    if(sameLen(n,m)==1)
    {
        while(n)
        {
            a[++i] = n%10==m%10 ? 1 : 0;
            n/=10;
            m/=10;
        }
    for(j=i;j>=1;j--)
        k+=a[j];
    cout<<"DA\n"<<k;
    }
    else
        cout<<"NU";
    return 0;
}
