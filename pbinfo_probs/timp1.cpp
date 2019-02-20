#include <iostream>

using namespace std;
int h1,m1,x,y,h2=0,m2=0;
int main()
{
    cin>>h1>>m1>>x>>y;
    h2=h1+x;
    if(y+m1<60)m2=y+m1;
    else
    {
        h2++;
        m2=y+m1-60;
        while(h2>=24)h2=h2-24;
    }
    cout<<h2<<" "<<m2;
    return 0;
}
