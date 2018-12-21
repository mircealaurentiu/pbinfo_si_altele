#include <iostream>
#include <cmath>

using namespace std;

int n, x, i;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cin>>x;
      if((int)sqrt(x)*(int)sqrt(x)==x)
        cout<<"DA";
      else
        cout<<"NU";
      cout<<"\n";
    }
    return 0;
}

