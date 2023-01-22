#include <iostream>

using namespace std;

int n, i;
unsigned long long int s;

int f(int n)
{
    if(1==n)
        return 1;
    return (2*n) + 2 + 4*(n-2);
}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        s+=f(i);
    cout<<s;
    return 0;
}
