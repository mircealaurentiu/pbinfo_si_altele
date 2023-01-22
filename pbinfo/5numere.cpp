#include <iostream>
#include <algorithm>

using namespace std;
int a[5], i;
int main()
{
    for(i=0;i<5;i++)
        cin>>a[i];
    sort(a, a+5);
    cout<<a[4]+a[3]+a[2];
    return 0;
}
