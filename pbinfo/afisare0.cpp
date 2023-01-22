#include <iostream>

using namespace std;

int v[1001], i, n;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        if(!(v[i]%v[n]))
            cout<<v[i]<<" ";
    return 0;
}
