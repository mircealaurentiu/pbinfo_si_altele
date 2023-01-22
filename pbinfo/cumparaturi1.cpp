#include <iostream>
#include <cmath>

using namespace std;

int s, c, n;

int main()
{
    cin>>s>>c>>n;
    if(s%c==0 && s%n==0)
        cout<<"CN";
    else if(s%c!=0 && s%n==0)
        cout<<"N";
    else if(s%c==0 && s%n!=0)
        cout<<"C";
    else
        cout<<"nimic";
}
