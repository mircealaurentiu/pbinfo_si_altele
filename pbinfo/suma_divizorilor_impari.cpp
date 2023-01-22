#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int suma_div_impari(int n)
{
    int i, s=0;
    for(i=1; i<=sqrt(n); i++)
    {
            if(n%i==0)
            {
                if(i%2!=0)
                    s+=i;
                if(n/i%2!=0)
                    s+=n/i;
            }
    }
    return s;
}

int n, s;

int main()
{
    cin>>n;
    cout<<suma_div_impari(n);
    return 0;
}
