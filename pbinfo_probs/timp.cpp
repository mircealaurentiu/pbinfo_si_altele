#include <iostream>

using namespace std;
int h1, m1, x, h2, m2, t;
int main()
{
    cin>>h1>>m1>>x;
    t=h1*60+m1+x;
    h2=t/60;
    m2=t%60;

    while(h2>24)
        h2-=24;

    if(h2%24==0 && h2!=0)
        h2-=24;
    else if(h2==0)
        h2=0;
    cout<<h2<<" "<<m2;
    return 0;
}
