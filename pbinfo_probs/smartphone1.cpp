#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int valid_neighbours(int c1, int c2)
{
    if(c1==1)
        return c2==2||c2==4||c2==5 ? 1:0;
    if(c1==2)
        return c2==1||c2==3||c2==4||c2==5||c2==6 ? 1:0;
    if(c1==3)
        return c2==2||c2==5||c2==6 ? 1:0;
    if(c1==4)
        return c2==1||c2==2||c2==5||c2==8||c2==7 ? 1:0;
    if(c1==5)
        return c2!=5 ? 1:0;
    if(c1==6)
        return c2==3||c2==2||c2==5||c2==8||c2==9 ? 1:0;
    if(c1==7)
        return c2==4||c2==5||c2==8 ? 1:0;
    if(c1==8)
        return c2==7||c2==4||c2==5||c2==6||c2==9 ? 1:0;
    if(c1==9)
        return c2==6||c2==5||c2==8 ? 1:0;
}

int is_pin_valid(int n)
{
    int a[10]={0}, i=0, j;
    while(n)
    {
        a[++i]=n%10;
        n/=10;
    }
    for(j=1;j<i;j++)
    {
        if(valid_neighbours(a[j], a[j+1]) == 0)
            return 0;
    }
    return 1;
}

int  n, x, i, p;

int main()
{
    ifstream fin("smartphone1.in");
    ofstream fout("smartphone1.out");
    fin>>n;
    for(i=1;i<=n;i++)
    {
        fin>>x;
        if(is_pin_valid(x))
            p++;
    }
    fout<<p;
    fin.close();
    fout.close();
    return 0;
}
