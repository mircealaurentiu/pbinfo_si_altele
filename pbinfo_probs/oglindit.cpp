#include <iostream>

using namespace std;
int n, o;
int main()
{
    cin>>n;
    while(n)
    {
        o=o*10+n%10;
        n/=10;
    }
    cout<<o;
    return 0;
}
