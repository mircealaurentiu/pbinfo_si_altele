#include <iostream>

using namespace std;

long long int suma(int n)
{
    long long int i, s=1;
    for(i=1;i<=n;i++)
        s=s*i;
    return s;
}
long long int n, i, s;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        s=s+suma(i);
    cout<<"Rezultatul este "<<s;
    return 0;
}
