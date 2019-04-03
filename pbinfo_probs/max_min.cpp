#include <iostream>

using namespace std;

int sumaCifre(int n)
{
    int s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int n, i, g[1001], mx=-1, mn=83, s, x, a, b, y;

int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(sumaCifre(a)>mx)
            {
                mx=sumaCifre(a);
                x=a;
            }
        else if(sumaCifre(a)<mn)
            {
                mn=sumaCifre(a);
                y=a;
            }
    }




    cout<<y<<"\n"<<x;
    /*for(i=1; i<=n; i++)
        cout<<sumaCifre(a[i])<<" ";*/
    return 0;
}
