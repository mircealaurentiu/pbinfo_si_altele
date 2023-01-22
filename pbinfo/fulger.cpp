#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int cate_cifre(int x)
{
    int k=0, p=0;
    while(x!=0)
    {
        k++;
        x/=10;
    }
    while(k!=0)
    {
        p=p*10+9;
        k--;
    }
    return p;

}

int fulger(int x)
{
    return cate_cifre(x) - x;
}

int n, i, x, k;

int main()
{
    ifstream fin("fulger.in");
    ofstream fout("fulger.out");
    fin>>n;
    for(i=1; i<=n; i++)
    {
        fin>>x;
        fout<<fulger(x)<<" ";
        if(fulger(x)%10==0 && fulger(x)/10%10==1)
            k++;
    }
    fout<<"\n"<<k;
    //cout<<fulger(n);
    return 0;
}
