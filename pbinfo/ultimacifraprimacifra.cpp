#include <iostream>

using namespace std;

int primaCifra(int n)
{
    while(n>9)
        n/=10;
    return n;
}
int n, i, a[1001];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
    {
        if(a[i]%10 == primaCifra(a[i+1]))
            cout<<a[i]<<" "<<a[i+1]<<"\n";
    }
    return 0;
}
