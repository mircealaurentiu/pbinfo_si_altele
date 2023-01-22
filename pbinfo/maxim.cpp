#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

long long int n, i, mx=-999999, x, k;

int main()
{
    while(cin>>x)
    {
        k++;
        if(x==0)
        {
            if(k==1)
            {
                cout<<"NU EXISTA";
                return 0;
            }
            break;
        }
        else
        {
            if(x>mx)
                mx=x;
        }
    }
    cout<<mx;
    return 0;
}
