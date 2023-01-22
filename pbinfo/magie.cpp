#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int suma_cifre(int x);

int n, x, i, k=0, m=-1;

int main()
{
    ifstream fin("magie.in");
    ofstream fout("magie.out");
    fin>>n;
    for(i=1;i<=n;i++)
    {
        fin>>x;
        if(x==2005)
            k++;
        if(suma_cifre(x)>m)
            m=suma_cifre(x);
    }
    fout<<k<<"\n"<<m;
    return 0;
}


int suma_cifre(int x)
{
    int s=0;
    while(x)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}
