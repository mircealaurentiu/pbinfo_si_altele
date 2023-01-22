#include <iostream>

using namespace std;
int n, s;
int main()
{
    cin>>n;
    do
    {
        s+=n;
        cin>>n;
    }while(n);
    cout<<s;
    return 0;
}
