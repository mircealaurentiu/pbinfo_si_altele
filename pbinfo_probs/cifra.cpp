#include <iostream>

using namespace std;
long long int n, c;
int cif(long long int n, int c)
{
    int x=0, u, p=1, k=0, q=0;
    while(n)
    {
        u=n%10;
        if(u!=c)
        {
            x=x+p*u;
            p*=10;
        }
        else
            k++;
        n/=10;
        q++;
    }
    if(k==q)
        return -1;
    return x;
}

int main()
{
    cin>>n>>c;
    cout<<cif(n,c);
    return 0;
}
