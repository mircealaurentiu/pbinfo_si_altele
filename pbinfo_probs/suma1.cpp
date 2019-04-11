#include <iostream>

using namespace std;
int x=-1, y=-2, s;
int main()
{
    while(x!=y)
    {
        y=x;
        cin>>x;
        s+=x;
    }
    cout<<s;
    return 0;
}
