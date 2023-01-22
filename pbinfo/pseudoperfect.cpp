#include <iostream>
#include <cmath>

using namespace std;
int suma(int n)
{
    int i, k=1;
    for(i=2;i<=sqrt(n)+1;i++)
        if(n%i==0)
            {k+=i;k+=n/i;}
    return k;
}
int n, s, x;
int main()
{
    cin>>n;
    x=suma(n);
    if(x%n==0)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
