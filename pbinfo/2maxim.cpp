#include <iostream>
#include <fstream>

using namespace std;

int n, i, x, y, mx1, mx2;

int main()
{

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>mx1)
        {
            mx2=mx1;
            mx1=x;
        }
        else if(x>mx2)
        {
            mx2=x;
        }
    }

    cout<<max(mx1, mx2)<<" "<<min(mx1, mx2);
    return 0;


}
