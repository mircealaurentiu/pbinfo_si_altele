#include <iostream>

using namespace std;
int apar(long long int n, int c)
{
    int u=n%10, k=0;
    while(n)
    {
        if(n%10==u)
            k++;
        n/=10;
    }
    return k;
}
long long int n;
int main()
{
    cin>>n;
    if(n)
        cout<<apar(n, n%10);
    else
        cout<<1;
    return 0;
}
