#include <iostream>

using namespace std;
int a, b, c, k=3;
int main()
{
    cin>>a>>b>>c;
    if(a==b && b==c)
        k=1;
    else
        if((a==b && a!=c) || (a==c && a!=b) || (b==c && a!=b))
            k=2;
    cout<<k;
    return 0;
}
