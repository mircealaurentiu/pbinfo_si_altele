#include <iostream>
#include <iomanip>

using namespace std;
double a, b, c, m;
int n;
int main()
{
    cin>>a>>b>>c;
    m=(a+b+c)/3;
    n=m;
    if(m-n == 0)
        cout<<m<<"."<<"00";
    else
        cout<<(int)(m*100)/100.0;
    return 0;
}
