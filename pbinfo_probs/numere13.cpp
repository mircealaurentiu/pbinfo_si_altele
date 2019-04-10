#include <iostream>

using namespace std;
int pare(int x, int y)
{
    while(x>9)
        x/=10;
    while(y>9)
        y/=9;
    if(x==y)
        return 1;
    return 0;
}
int x, y, s;
int main()
{
    do
    {
        cin>>x>>y;
        while(x>9)
            x/=10;
        while(y>9)
            y/=10;
        if(x==y)
            s++;

    }while(x!=0 && y!=0);
    cout<<s-1;
    return 0;
}
