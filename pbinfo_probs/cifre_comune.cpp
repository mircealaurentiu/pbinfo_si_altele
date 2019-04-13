#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

long long int n, m, i, j, a[11];

int main()
{
    cin>>n>>m;
    while(n!=0)
    {
        a[n%10]=1;
        n/=10;
    }
    while(m!=0)
    {
        a[m%10]+=10;
        m/=10;
    }
    for(i=0;i<10;i++)
        if(a[i]!=1 && a[i]%10==1)
    {
        cout<<"DA";
        return 0;
    }
    cout<<"NU";
    return 0;
}
