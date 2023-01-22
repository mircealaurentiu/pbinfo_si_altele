#include <iostream>
#include <cmath>

using namespace std;

int s, d, r, m;

int main()
{
    cin>>s>>d>>r>>m;
    if(s>=d)
        cout<<"drona";
    else if(s>=r)
        cout<<"robot";
    else if(s>=m)
        cout<<"masina";
    else
        cout<<"nimic";
}
