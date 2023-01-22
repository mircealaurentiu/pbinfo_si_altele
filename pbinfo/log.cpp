#include <iostream>
#include <cmath>

using namespace std;
long long int n, m;
int k, x, i;
int main()
{
    cin>>n>>m;
    while(m>1)
    {
        x++;
        m=m/n;
    }
    cout<<x;
    return 0;
}
