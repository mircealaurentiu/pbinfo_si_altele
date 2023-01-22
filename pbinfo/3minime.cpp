#include <iostream>
#include <fstream>

using namespace std;

int n, i, x, y, mx1=9999, mx2=9999, mx3=9999, a, b, c;

int main()
{

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x<mx1)
        {
            mx3=mx2;
            mx2=mx1;
            mx1=x;
        }
        else if(x<mx2)
        {
            mx3=mx2;
            mx2=x;
        }
        else if(x<mx3)
        {
            mx3=x;
        }
    }

    a=max(max(mx1, mx2), max(mx2, mx3));
    c=min(min(mx1, mx2), min(mx2, mx3));
    b=mx1+mx2+mx3-a-c;

    cout<<a<<" "<<b<<" "<<c;
    return 0;


}
