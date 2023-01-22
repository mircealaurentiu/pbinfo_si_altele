#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

long long int oglindit(long long int n)
{
    long long int p=0;
    while(n)
    {
        p=p*10+n%10;
        n/=10;
    }
    return p;
}

long long int n, i, m=999999, p, x, y;

int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        p=oglindit(x);
        if(abs(x-p)<m)
        {
            m=abs(x-p);
            y=x;
        }
        if(abs(x-p)==m)
        {
            if(x<y)
            {
                m=abs(x-p);
                y=x;
            }
        }


    }
    cout<<y;
    //cout<<abs(n-oglindit(n));
    return 0;
}
