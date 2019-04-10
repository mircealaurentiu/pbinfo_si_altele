#include <iostream>

using namespace std;
int ogl(int n)
{
    int x=0;
    while(n)
    {
        x=x*10+n%10;
        n/=10;
    }
    return x;
}
int sum(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int n;
int main()
{
    cin>>n;
    cout<<ogl(sum(n));
    return 0;
}
