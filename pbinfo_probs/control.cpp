#include <iostream>

using namespace std;
int suma(int x)
{
    int s=0;
    while(x)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}
int n, x;
int main()
{
    cin>>n;
    x=suma(n);
    while(x>9)
        x=suma(x);
    cout<<x;
    return 0;
}
