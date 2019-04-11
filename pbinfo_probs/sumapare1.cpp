#include <iostream>

using namespace std;
int n, s, x;
int main()
{
    cin>>x;
    do
    {
        if(x%2==0)
            s+=x;
        cin>>x;
    }while(x!=0);
    cout<<s;
    return 0;
}
