#include <iostream>
#include <cmath>

using namespace std;

int a, b, c;

int main()
{
    cin>>a>>b>>c;
    cout<<max(a,max(b,c))-min(a,min(b,c));
    return 0;
}
