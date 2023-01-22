#include <iostream>
#include <algorithm>

using namespace std;
int x, y;
int main()
{
    cin>>x>>y;
    if(x>y)
        swap(x,y);
    if(y-x==1 && x%2==0)
        cout<<"Andrei e mai responsabil";
    else
        cout<<"minciuna";
    return 0;
}
