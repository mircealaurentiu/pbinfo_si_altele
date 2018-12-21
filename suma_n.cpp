#include <iostream>

using namespace std;

int n, i, x, s;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        s+=x;
    }
    cout<<s;
    return 0;
}

