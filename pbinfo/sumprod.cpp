#include <iostream>

using namespace std;
int a, b, c, m;
int main()
{
    cin>>a>>b>>c;
    m=a*b+c;
    if(a*c+b>m)
        m=a*c+b;
    if(b*c+a>m)
        m=b*c+a;
    cout<<m;
    return 0;
}
