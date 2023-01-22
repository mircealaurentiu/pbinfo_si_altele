#include <iostream>

using namespace std;

int v[1001], i, n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];

    if(n%2!=0)

            for(i=1;i<=n/2+1;i++)
                if(i!=n-i+1)
                    cout<<v[i]<<" "<<v[n-i+1]<<" ";
                else
                    cout<<v[i]<<" ";

    else
        for(i=1;i<=n/2;i++)
            cout<<v[i]<<" "<<v[n-i+1]<<" ";
    return 0;
}
