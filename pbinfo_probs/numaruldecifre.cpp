#include <iostream>

using namespace std;
int k;
long long int n;
int main()
{
    cin>>n;
    if(n==0)
        cout<<1;
    else
    {
        while(n)
        {
            k++;
            n/=10;
        }
        cout<<k;
    }
    return 0;
}
