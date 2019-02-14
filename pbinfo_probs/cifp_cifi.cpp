#include <iostream>

using namespace std;
int n, i, a, b, x, y, pare, impare;

int v[10]= {0};
int main()
{
    cin>>x>>y;
    a=x;
    b=y;

    while(a)
    {
        v[a%10]++;
        a/=10;
    }
    while(b)
    {
        v[b%10]++;
        b/=10;
    }

    if(x%2==y%2)
    {
        for(i=0; i<=10; i+=2)
            if(v[i]!=0)
                pare+=v[i];
        cout<<pare;
    }
    else
    {
        for(i=1; i<=9; i+=2)
            if(v[i]!=0)
                impare+=v[i];
        cout<<impare;
    }
    return 0;
}
