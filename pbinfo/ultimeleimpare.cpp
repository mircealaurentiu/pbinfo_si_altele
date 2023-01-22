#include <iostream>

using namespace std;
int n, i, a[10001], x1=2, x2=2;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=n;i>=1;i--)
    {
        if(a[i]%2!=0)
        {
            x2=a[i];
            a[i]=2;
            break;
        }
    }
    for(i=n;i>=1;i--)
    {
        if(a[i]%2!=0)
        {
            x1=a[i];
            a[i]=2;
            break;
        }
    }
    if(x1%2==0 || x2%2==0)
        cout<<"Numere insuficiente";
    else
        cout<<x1<<" "<<x2;
    return 0;
}
