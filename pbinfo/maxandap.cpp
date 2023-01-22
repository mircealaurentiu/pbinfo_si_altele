#include <iostream>

using namespace std;
int n, m, a[100], k, i;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>=m)
                m=a[i];
    }
    for(i=1;i<=n;i++)
        if(a[i]==m)
            k++;
    cout<<m<<" "<<k;
    return 0;
}
