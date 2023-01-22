#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int n;

int oglinda(int n)
{
    int p=0;
    while(n)
    {
        p=p*10+n%10;
        n/=10;
    }
    return p;
}

int nr(int n, int i)
{
    if(i==2)
    {
        int p=0;
        while(n)
        {
            if(n%10%2==0)
                p=p*10+n%10;
            n/=10;
        }
        return oglinda(p);
    }
    else if(i==3)
    {

        int q=0;
        while(n)
        {
            if(n%10%2!=0)
                q=q*10+n%10;
            n/=10;
        }
        return oglinda(q);

    }
}

int main()
{

    cin>>n;
    //cout<<nr(n,2);
    cout<<abs(nr(n,2) - nr(n,3));
    return 0;


}
