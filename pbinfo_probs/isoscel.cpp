#include <iostream>

using namespace std;
double a, b, c, k;
int main()
{
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
        k++;
    if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a))
        k++;
    if(k==0)
        cout<<"Nu formeaza triunghi";
    if(k==1)
        cout<<"Nu formeaza triunghi isoscel";
    if(k==2)
        cout<<"Formeaza triunghi isoscel";
    return 0;
}
