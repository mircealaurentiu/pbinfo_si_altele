#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int cif_max(long long int n)
{
    int mx=-1;
    while(n)
    {
        if(n%10>mx)
            mx=n%10;
        n/=10;
    }
    return mx;
}

long long int n, i, m, p, x;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m=cif_max(x);
        p=p*10+m;
    }
    cout<<p*p;
    //cout<<cif_max(n);
    return 0;
}
