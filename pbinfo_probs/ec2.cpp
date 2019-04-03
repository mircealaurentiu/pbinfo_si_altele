#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>


using namespace std;

double a, b, c, d, r1, r2;

int main()
{
    cin>>a>>b>>c;
    d=b*b-4*a*c;

    if(d<0)
    {
        cout<<"Nu are solutii reale";
        return 0;
    }
    if(d==0)
    {
        cout<<"Radacina dubla ";
        r1=1.00*(-1)*b/(2*a);
        printf("%.2f",r1);
        return 0;
    }
    if(d>0)
    {
        r1=1.00*( (-1)*b+sqrt(d) ) /(2*a);
        r2=1.00*( (-1)*b-sqrt(d) ) /(2*a);
        printf("%.2f %.2f",r1, r2);
        return 0;

    }
    return 0;
}
