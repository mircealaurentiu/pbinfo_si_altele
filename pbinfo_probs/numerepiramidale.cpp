#include <iostream>
#include <cmath>

using namespace std;

int n, x, s, i;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
      s+=pow(i,2);
      cout<<s<<" ";
    }
    return 0;
}

