#include <iostream>
#include <cmath>



using namespace std;

int a, b, c, n;

int main()
{
    cin>>n;
    a=n%10;
    b=n/10%10;
    c=n/100;
    cout<<min( min(a,b), min(b,c) )<<" "<< a+b+c - max( max(a,b), max(b,c) ) - min( min(a,b), min(b,c) ) <<" "<<max( max(a,b), max(b,c) );
    return 0;
}
