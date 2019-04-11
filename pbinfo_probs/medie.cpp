#include <iostream>

using namespace std;
int n, i, x, k;
double s;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
            {
                s+=x;
                k++;
            }
    }
    cout<<s/k;
    return 0;
}
