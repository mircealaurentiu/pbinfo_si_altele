#include <iostream>
#include <algorithm>

using namespace std;
int prima(int n)
{
    while(n>9)
        n/=10;
    return n;
}
int n, i, j, mx, a[1001], mxp, b[1001], k;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(prima(a[i])>mx)
            mx=prima(a[i]);
    }
    for(i=1;i<=n;i++)
        if(prima(a[i])==mx)
            {b[++j]=a[i];k++;}
    sort(b+1, b+k+1);
    cout<<b[k];
    return 0;
}
