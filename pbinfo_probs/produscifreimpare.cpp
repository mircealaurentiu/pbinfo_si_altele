#include <iostream>

using namespace std;
int n, k=1, u, z=0;
int main()
{
    cin>>n;
    while(n)
    {
        u=n%10;
        if(u%2!=0)
            {k=k*u; z++;}
        n/=10;
    }
    if(z!=0)
        cout<<k;
    else
        cout<<-1;
    return 0;
}
