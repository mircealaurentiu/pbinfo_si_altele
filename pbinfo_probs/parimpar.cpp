#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

unsigned long long int invers(unsigned long long int n)
{
    int p=0;
    while(n)
    {
        p=p*10+n%10;
        n/=10;
    }
    return p;
}

unsigned long long int doar_cu_cifre(unsigned long long int n, unsigned long long int c)
{
    int p=0, k=0;
    //c=1 impar
    //c=2 par
    if(c%2!=0)
    {
        while(n)
        {
            if(n%10%2!=0)
                p=p*10+n%10;
            n/=10;
        }
    }
    if(c%2==0)
    {
        if(n%10==0)
            k=1;
        while(n)
        {
            if(n%10%2==0)
                p=p*10+n%10;
            n/=10;
        }
    }
    if(k==1)
        return invers(p)*10;
    return invers(p);
}

unsigned long long int  n, m;

int main()
{
    cin>>n>>m;
    if(doar_cu_cifre(n,n%10)>doar_cu_cifre(m,m%10))
        cout<<n;
    else if(doar_cu_cifre(n,n%10)<doar_cu_cifre(m,m%10))
        cout<<m;
    else
        cout<<max(n, m);
    //cout<<doar_cu_cifre(n,n%10);
    return 0;
}
