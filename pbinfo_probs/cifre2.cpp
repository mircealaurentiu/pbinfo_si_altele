#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int i, j, a[10], x;

int main()
{

    cin>>x;
    while(x>99)
    {
        x/=10;
    }
    cout<<x%10+x/10;
    return 0;


}
