#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int n, x, y, i, k=0, j, a[11];

int main()
{
    cin>>n;
    while(n)
    {
        a[++i]=n%10;
        n/=10;
    }
    for(j=i/2; j>=1; j--)
        x=x*10+a[j];
    if(i%2==0)
    {
        for(j=i; j>=i/2+1; j--)
            y=y*10+a[j];
    }
    else
    {
        for(j=i; j>=i/2+2; j--)
            y=y*10+a[j];
    }
    cout<<abs(x-y);
    return 0;
}
