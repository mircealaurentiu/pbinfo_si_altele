#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int n, i, c, s, x, k=1;
int main()
{

    cin>>n>>c;
    for(i=1;i<=n;i++)
    {
        cin>>x;

        if(s+x<=c)
        {
            s+=x;
        }
        else
        {
            s=0;
            s+=x;
            k++;
        }

    }

    cout<<k;

    return 0;
}
