#include <iostream>

using namespace std;
long long int n;
int s;
int main()
{
    cin>>n;
    n/=10;
    while(n)
    {
        s+=n%10;
        n/=100;
    }
    cout<<s;
    return 0;
}
