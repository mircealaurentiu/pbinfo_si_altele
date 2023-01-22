#include <iostream>

using namespace std;
int n;
int main()
{
    cin>>n;
    if(n<10)
        cout<<1;
    else
        if(n<100)
            cout<<2;
    else
        cout<<3;
    return 0;
}
