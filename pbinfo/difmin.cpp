#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int n, i, x, y, mn=99999, s1, s2, r1, r2, xbun, ybun;

int main()
{

    cin>>n;

    cin>>x>>y;

    r1=abs(x-y);
    xbun=x;
    ybun=y;
    for(i=3;i<=n;i++)
    {
        cin>>x;
        r2=abs(x-y);
        if(r2<r1)
        {
            r1=r2;
            xbun=x;
            ybun=y;
        }
        if(r2==r1)
        {
            if(x+y<xbun+ybun)
            {
                xbun=x;
                ybun=y;
                r1=r2;
            }
        }

        y=x;
    }
    cout<<ybun<<" "<<xbun;

    return 0;


}
