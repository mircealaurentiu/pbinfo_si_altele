#include <iostream>

using namespace std;
int c2(long long int n)
{
    int k=0;
    while(n)
    {
        if(n%10==2)
            k++;
        n/=10;
    }

    return k;
}

int c3(long long int n)
{
    int k=0;
    while(n)
    {
        if(n%10==3)
            k++;
        n/=10;
    }

    return k;
}
long long int n;
int main()
{
    cin>>n;
    if(c2(n) > c3(n))
        cout<<2;
        else if(c2(n) < c3(n))
            cout<<3;
            else cout<<"2 3";
    return 0;
}
