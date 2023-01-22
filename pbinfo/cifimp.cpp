#include <iostream>

using namespace std;
int n, k=0;
int main()
{
    cin>>n;
    while(n)
        {
            if(n%10%2!=0)
                k++;
            n/=10;
        }
    cout<<k;
    return 0;
}
