#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

long long int n, i, mx=-999999, mn=999999, x;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>mx)
            mx=x;
        if(x<mn)
            mn=x;
    }
    cout<<mx+mn;
    return 0;
}