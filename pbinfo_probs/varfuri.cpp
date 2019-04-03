#include <iostream>
#include <cmath>

using namespace std;

int n, i, v[1001], s, k, x, y;
int main()
{

    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];

    for(i=1;i<n-1;i++)
        if(v[i]>v[i+1] && v[i]>v[i-1])
            s+=v[i];

    cout<<s;

    return 0;
}
