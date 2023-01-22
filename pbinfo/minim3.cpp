#include <iostream>

using namespace std;
int a, b, c, m;
int main()
{
    cin>>a>>b>>c;
    m=a;
    if(b<m)
        m=b;
    if(c<m)
        m=c;
    cout<<m;
    return 0;
}
