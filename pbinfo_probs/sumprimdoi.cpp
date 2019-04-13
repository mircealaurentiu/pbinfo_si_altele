#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int primele_doua_cifre(int n)
{
    while(n>=100)
        n/=10;
    return n;
}

int n, s;

int main()
{
    while(cin>>n)
    {
        if(n>99)
            s+=primele_doua_cifre(n);
        else if(n>9 && n<100)
            s+=n;
    }
    cout<<s;
    return 0;
}
