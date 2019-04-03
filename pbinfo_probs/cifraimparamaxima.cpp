#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int n, mx;

int main()
{

    cin>>n;
    while(n!=0)
    {
        if(n%10%2!=0 && n%10>mx)
            mx=n%10;
        n/=10;
    }

    if(mx==0)
        cout<<"nu exista";
    else
        cout<<mx;

    return 0;


}
