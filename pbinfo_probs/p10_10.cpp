#include <iostream>
#include <cmath>

using namespace std;
long long int n;
int k, x, i;
int main()
{
    cin>>n>>k;
    while(n!=1)
    {
        n=n/10;
        x++;
    }
    cout<<1;
    for(i=1;i<=k*x;i++)
        cout<<0;
    return 0;
}
