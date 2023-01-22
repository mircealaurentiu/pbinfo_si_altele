#include <iostream>
#include <algorithm>

using namespace std;
int n, x, y, mx=-1, i, a, b;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(abs(x-y) > mx)
        {
            mx=abs(x-y);
            a=x;
            b=y;
        }
    }
    cout<<a<<" "<<b;
    return 0;
}
