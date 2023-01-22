#include <iostream>
#include <cmath>

using namespace std;
double B, b, l, d, h, lm;
int main()
{
    cin>>B>>b>>l;
    lm=(B-b)/2;
    h=sqrt(l*l - lm*lm);
    d=sqrt((b+lm)*(b+lm) + h*h);
    cout<<d;
    return 0;
}
