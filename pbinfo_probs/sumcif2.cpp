#include <iostream>

using namespace std;
int cate(long long int n)
{
    int k=0;
    while(n)
    {
        k++;
        n/=10;
    }
    return k;
}
long long int n;
int s;
int main()
{
    cin>>n;
    if(cate(n)%2!=0)
    {
        while(n)
        {
            s+=n%10;
            n/=100;
        }
    }
    else
    {
        n/=10;
        while(n)
        {
            s+=n%10;
            n/=100;
        }
    }
    cout<<s;
    return 0;
}
