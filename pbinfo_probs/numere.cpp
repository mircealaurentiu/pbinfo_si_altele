#include <iostream>

using namespace std;
int n, i, x, k=0;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            cout<<x;
            k=1;
            break;
        }
    }
    if(k==0)
        cout<<"IMPOSIBIL";
    return 0;
}
