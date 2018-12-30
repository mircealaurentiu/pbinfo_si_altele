#include <iostream>

using namespace std;
int n, i=2;
int main()
{
    cin>>n;
    while(n)
    {
        cout<<i<<" ";
        i+=2;
        n--;
    }
    return 0;
}
