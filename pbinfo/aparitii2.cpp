#include <iostream>

using namespace std;
int n, m, k;
int main()
{
    cin>>n;
    m=n;
    while(m>10)
        m/=10;
    while(n)
    {
        if(n%10==m)
            k++;
        n/=10;
    }
    if(k!=0)
        cout<<k;
    else
        cout<<1;
    return 0;
}
