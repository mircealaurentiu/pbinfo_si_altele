#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

long long int n, a[19], i, j;

int main()
{
    cin>>n;
    while(n)
    {
        a[++i]=n%10;
        n/=10;
    }
    for(j=i;j>=1;j--)
        if(j!=i/2+1)
            cout<<a[j];
    return 0;
}
