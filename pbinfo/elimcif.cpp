#include <iostream>

using namespace std;
int n, u;
int main()
{
    cin>>n;
    u=n%10;
    n=n/100*10+u;
    cout<<n;
    return 0;
}
