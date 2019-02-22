#include <iostream>
#include <cmath>

using namespace std;
// int x, y, z, a, b, c;
double x, y, z, a, b, c;
/*
5 ani aveam problema asta nerezolvata;
5 ani pentru ca nu am citit bine enuntul, pana mi-a sora mea sa il recitesc, cu mai multa atentie;
oricine vede acest cod si acest comentariu este frumos rugat sa citeasca atent tot enuntul oricarei probleme.
*/

int main()
{
    cin>>x>>y>>z;
    c=min(min(x,y), min(y, z));
    a=max(max(x,y), max(y, z));
    b=x+y+z-a-c;

    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
    {
        if((a*a)==(b*b)+(c*c)) cout<<"triunghi dreptunghic";
        else if((a*a)>(b*b)+(c*c)) cout<<"triunghi obtuzunghic";
        else if((a*a)<(b*b)+(c*c)) cout<<"triunghi ascutitunghic";
    }
    else cout<<"nu este triunghi";
    return 0;
}