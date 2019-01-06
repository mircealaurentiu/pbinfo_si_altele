#include <iostream>

using namespace std;
int n;
int main()
{
    cin>>n;
    if(n%10 == n/10%10 && n/10%10 == n/100)
        cout<<"da";
    else
        cout<<"nu";
    return 0;
}
