#include <iostream>
#include <cmath>

using namespace std;
int n, suma, k, x, i;
int main()
{
    cin>>n>>k;
    for(i=1;i<=k;i++)
    {
        cin>>x;
        suma+=x;
    }
    if(suma==0)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
