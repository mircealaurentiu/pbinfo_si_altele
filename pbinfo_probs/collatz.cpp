#include <iostream>

using namespace std;
int n, k=1;
int main()
{
    cin>>n;
    do
    {
        if(n%2==0)
            n/=2;
        else
            n=n*3+1;
        k++;

    }while(n!=1);
    cout<<k;
    return 0;
}
