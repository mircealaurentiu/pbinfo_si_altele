#include <iostream>

using namespace std;

int n, i;
unsigned long long x;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2!=0)
            cout<<1<<" ";
        else
            cout<<0<<" ";
    }

    return 0;
}
