#include <iostream>
#include <cmath>

using namespace std;
int n, s, i;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        s+=i*(n-i+1);
       // cout<<i<<" "<<n-i+1<<"\n";
    }
    cout<<"Rezultatul este "<<s;
    return 0;
}
