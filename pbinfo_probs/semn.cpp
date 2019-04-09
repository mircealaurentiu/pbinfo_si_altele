#include <iostream>

using namespace std;
int n;
int main()
{
    cin>>n;
    if(n>0)
        cout<<"pozitiv";
    else if(n<0)
        cout<<"negativ";
    else
        cout<<"nul";
    return 0;
}
