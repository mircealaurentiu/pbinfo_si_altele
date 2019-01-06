#include <iostream>

using namespace std;
int x, k;
int main()
{
    cin>>x;
    while(x)
    {
        if(x%2!=0)
            k++;
        cin>>x;
    }
    cout<<k;
    return 0;
}
