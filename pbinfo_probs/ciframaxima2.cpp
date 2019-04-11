#include <iostream>

using namespace std;
int n, k, mx, m;
int main()
{
    cin>>n;
    m=n;
    while(n)
    {
        if(n%10 >= mx)
            mx=n%10;
        n/=10;
    }
    if(m!=0)
    {
        while(m)
        {
            if(m%10==mx)
                k++;
            m/=10;
        }
    cout<<mx<<" "<<k;
    }
    else
        cout<<0<<" "<<1;
    return 0;
}
