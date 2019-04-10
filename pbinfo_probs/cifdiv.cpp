#include <iostream>

using namespace std;
int n, m, k;
int main()
{
    cin>>n>>m;
    while(n)
    {
        if(n%10 != 0)
         if(m%(n%10)==0)
             k++;
        n/=10;
    }
    cout<<k;
    return 0;
}
