#include <iostream>

using namespace std;
int x, k;
int main()
{
    cin>>x;
    while(x)
    {
        if(x%2==0)
            k++;
        cin>>x;
    }
    if(k)
        cout<<k;
    else
        cout<<"NU EXISTA";
    return 0;
}
