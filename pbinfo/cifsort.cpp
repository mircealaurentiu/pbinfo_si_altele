#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int i, j, a[10], x;

int main()
{

    cin>>x;
    while(x!=0)
    {
        a[++j]=x%10;
        x/=10;
    }
    for(i=j;i>=1;i-=2)
        cout<<a[i-1]<<a[i];
    return 0;


}
