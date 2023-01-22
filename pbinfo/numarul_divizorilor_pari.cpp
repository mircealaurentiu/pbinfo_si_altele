#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int cati_div_pari(int n)
{
    int i, s=0;
    int x=sqrt(n);
    if(x*x==n)
        s--;
    for(i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(i%2==0)
                s+=1;
            if(n/i%2==0)
                s+=1;
        }
    }
    return s;
}

int n, s;

int main()
{
    cin>>n;
    cout<<cati_div_pari(n);
    return 0;
}
