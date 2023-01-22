#include <iostream>

using namespace std;
int n, i, x, s, m, p;
int main()
{
    cin>>s>>n;
    for(i=n;i>=1;i--)
    {
        cin>>x;
        if(s/x > m)
            {
                m=s/x;
                p=i;
            }
    }
    cout<<m<<" "<<n-p+1;
    return 0;
}
