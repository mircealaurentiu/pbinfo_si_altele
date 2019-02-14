#include <iostream>
#include <cmath>

using namespace std;
long long int suma(unsigned long long int n)
{
    long long int s=0, i;
    long long int x=0;
    x=sqrt(n);
    for(i=1;i<=x;i++)
        if(n%i==0)
    		{
        		s=s+i;
        		if(i!=n/i)
                    s=s+n/i;
    		}
        
    return s;
}
unsigned long long int n;
int main()
{
    cin>>n;
    cout<<suma(n);
    return 0;
}
