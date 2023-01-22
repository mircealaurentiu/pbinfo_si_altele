#include <iostream>
#include <cmath>

using namespace std;

unsigned long long int cnp;
int zi, luna, an;

int main()
{
    cin>>cnp;
    cnp/=1000000;
    zi=cnp%100;
    luna=cnp/100%100;
    an=cnp/10000%100;
    if(an<10)
        cout<<0<<an<<" ";
    else
        cout<<an<<" ";
    if(luna<10)
        cout<<0<<luna<<" ";
    else
        cout<<luna<<" ";
    if(zi<10)
        cout<<0<<zi;
    else
        cout<<zi<<" ";
    return 0;
}
