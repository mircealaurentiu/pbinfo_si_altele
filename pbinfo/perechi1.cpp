#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int n, i, x, y, mn=1001, p;

int main()
{

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(abs(x-y)<=mn)
        {
            mn=abs(x-y);
            p=i;
        }
    }
    cout<<p;

    return 0;


}
