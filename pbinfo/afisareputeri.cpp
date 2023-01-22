#include <iostream>
#include <cmath>

using namespace std;
long long int n, p, i=0, x;
int main()
{
    cin>>n>>p;
    do
    {
        x=pow(n,i);
        if(x<=p)
            cout<<x<<" ";
        else
            break;
        i++;
    }while(x<=p);
    return 0;
}
