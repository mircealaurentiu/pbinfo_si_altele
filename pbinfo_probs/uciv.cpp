#include <iostream>

using namespace std;
int a, b;
int main()
{
    cin>>a>>b;
    a=a%10;
    b=b%10;
    cout<<(a+b)%10;
    return 0;
}
