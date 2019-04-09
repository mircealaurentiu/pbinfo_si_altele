#include <iostream>

using namespace std;
long long int x, mn=1000000, k=0;
int main()
{
    do
    {
        cin>>x;
        if(x>0)
            if(x<mn)
                {
                    mn=x;
                    k=1;
                }
    }while(x);
    if(k)
        cout<<mn;
    else
        cout<<"NU EXISTA";
    return 0;
}
