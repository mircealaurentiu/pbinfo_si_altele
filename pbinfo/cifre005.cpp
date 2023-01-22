#include <iostream>
using namespace std;
int main()
{
    long long n,r,i,nr=0,x;
    cin>>n>>r;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%9==r)
            nr++;
    }
    cout<<nr;
    return 0;
}