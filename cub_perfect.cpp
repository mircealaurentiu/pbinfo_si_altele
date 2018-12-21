#include <iostream>
#include <cmath>

using namespace std;

long long int n, x, i, t;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>x;
      if(int(cbrt(x))*int(cbrt(x))*int(cbrt(x))==x)
        cout<<"DA";
      else
        cout<<"NU";
      cout<<"\n";
    }
    return 0;
}

