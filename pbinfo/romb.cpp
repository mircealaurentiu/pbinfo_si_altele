#include <iostream>
#include <cmath>

using namespace std;
double d1, d2, p, a, l;
int main()
{
    cin>>d1>>d2;
    a=(d1*d2)/2;
    d1/=2;
    d2/=2;
    l=sqrt(d1*d1 + d2*d2);
    p=4*l;
    cout<<p<<" "<<a;
    return 0;
}
