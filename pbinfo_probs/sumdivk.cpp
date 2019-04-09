#include <iostream>

using namespace std;
int sumcif(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }

    return s;
}int n, k, i, s, x;
int main()
{
    cin>>k>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(sumcif(x)%k == 0)
            s+=x;
    }
    cout<<s;
    return 0;
}
