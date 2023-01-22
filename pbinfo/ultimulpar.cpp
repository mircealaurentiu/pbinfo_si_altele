#include <iostream>
#include <cmath>

using namespace std;

int n, i, x, k=-1;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
            k=x;
    }
    if(k==-1)
        cout<<"IMPOSIBIL";
    else
        cout<<k;
    return 0;
}