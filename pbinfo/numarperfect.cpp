#include <iostream>
#include <cmath>

using namespace std;
int suma(int n)
{
    int i, k=0;
    for(i=1;i<=sqrt(n);i++)
        if(n%i==0)
            k+=i+n/i;
    return k;
}
int n, x;
int main()
{
    cin>>n;
    x=suma(n);
    if(x==2*n)
        cout<<n<<" este perfect";
    else
        cout<<n<<" nu este perfect";
    return 0;
}
