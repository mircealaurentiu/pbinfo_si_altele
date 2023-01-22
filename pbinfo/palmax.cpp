#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int e_palindrom(int x)
{
    int n=x, m=0;
    while(n)
    {
        m=m*10+n%10;
        n/=10;
    }
    return x==m ? 1:0;
}

int x, i, j, a[100], mx=-1, p=-1;


int main()
{

    while(cin>>x)
        if(e_palindrom(x))
            a[++i]=x;
    for(j=1; j<i; j++)
        if(a[j]>mx)
        {
            mx=a[j];
            p=1;
        }
        else if(a[j]==mx)
            p++;

    if(p!=-1)
        cout<<mx<<" "<<p;
    else
        cout<<"NU EXISTA";
    return 0;
}
