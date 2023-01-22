#include <iostream>

using namespace std;

unsigned long  a;
int i, b, k=1;
int main()
{

    cin>>a>>b;
    while(a)
    {
        if(a%10>b)
        {
            k=0;
            break;
        }
        a/=10;
    }

    if(k==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
