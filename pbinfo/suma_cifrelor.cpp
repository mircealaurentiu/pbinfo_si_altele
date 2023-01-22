#include <iostream>

using namespace std;
int n, s;
int main()
{
    cin>>n;
    while(n)
    {
        s+=n%10;
        n/=10;
    }
    cout<<s;
    return 0;
}
