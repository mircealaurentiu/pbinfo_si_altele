#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int patrat_cub_cifre_diferite(int x);

int n, m, i, j, a[11];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(patrat_cub_cifre_diferite(i)!=0)
            cout<<i<<" ";
    }
    return 0;
}


int patrat_cub_cifre_diferite(int x)
{
    int a[11]={0}, p, c, i;
    p=x*x;
    c=x*x*x;
    while(p!=0)
    {
        a[p%10]=1;
        p/=10;
    }
    while(c!=0)
    {
        a[c%10]+=10;
        c/=10;
    }
    for(i=0;i<=10;i++)
        if(a[i]!=1 && a[i]%10==1)
            return 0;
    return 1;
}
