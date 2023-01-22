#include <iostream>
#include <algorithm>

using namespace std;
int n, x, i, j, p;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
            p++;
        else
            j++;
    }
    cout<<abs(p-j);
    return 0;
}
