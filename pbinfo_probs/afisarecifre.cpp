#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n, a[11], i, j;

int main()
{
    cin>>n;
    while(n)
    {
        a[n%10]=1;
        n/=10;
    }
    sort(a, a+i+1);
    for(j=0;j<=10;j++)
        if(a[j]!=0)
            cout<<j<<" ";
    return 0;
}
