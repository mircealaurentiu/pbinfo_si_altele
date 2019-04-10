#include <iostream>

using namespace std;
int n, i, k=1, x;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2!=0)
            {
                k=0;
                break;
            }
    }
    if(k==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
