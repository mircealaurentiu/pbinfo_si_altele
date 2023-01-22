#include <iostream>
#include <cmath>

using namespace std;

int zi, luna, an;

int bisect(int an)
{
    if((an%4==0 && an%100!=0)||(an%400==0))
        return 1;
    return 0;
}

int main()
{
    cin>>zi>>luna>>an;
    if( (luna==1 && zi<=31) || (luna==2 && zi<=28 && bisect(an)==0) || (luna==2 && zi<=29 && bisect(an)==1) || (luna==3 && zi<=31) || (luna==4 && zi<=30) || (luna==5 && zi<=31) || (luna==6 && zi<=30) || (luna==7 && zi<=31) || (luna==8 && zi<=31) || (luna==9 && zi<=30) || (luna==10 && zi<=31) || (luna==11 && zi<=30) || (luna==12 && zi<=31) )
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}
