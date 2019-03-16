#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

long long int n, i, mn=999999999, x;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x<mn)
            mn=x;
    }
    cout<<mn;
    return 0;
}