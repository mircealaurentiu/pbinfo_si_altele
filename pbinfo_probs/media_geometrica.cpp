#include <iostream>
#include <cmath>

using namespace std;
int n, i, x;
double m=1;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        m*=x;
    }
    m=pow(m,(double)1/n);
    cout<<m;
    return 0;
}
