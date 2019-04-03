#include <iostream>
#include <cmath>



using namespace std;

int a, b;

int main()
{
    cin>>a>>b;
    if((a - ((b - 1) * b) / 2) % b == 0)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
