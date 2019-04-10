#include <iostream>
#include <algorithm>

using namespace std;
int n, i, x, y, mx=-1, k=0;
int main()
{
    cin>>n;
    cin>>x;
    for(i=2;i<=n;i++)
    {
        cin>>y;
        if(abs(x-y) > mx)
        {
            mx=abs(x-y);
            k=1;
        }
        else
            if(abs(x-y) == mx)
                k++;
        x=y;

    }
    cout<<mx<<" "<<k;
    return 0;
}
