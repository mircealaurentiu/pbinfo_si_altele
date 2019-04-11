#include <iostream>
#include <cmath>

using namespace std;
int n;
int main()
{
    cin>>n;
    if( sqrt(n) == (int)(sqrt(n)) )
        cout<<"da";
    else
        cout<<"nu";
    return 0;
}
