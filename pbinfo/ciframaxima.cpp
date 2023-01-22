#include <iostream>

using namespace std;
int n, m;
int main()
{
    cin>>n;
    while(n)
    {
        if(n%10>m)
            m=n%10;
        n/=10;
    }
    cout<<m;
    return 0;
}
