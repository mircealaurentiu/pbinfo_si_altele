#include <iostream>
#include <cmath>

using namespace std;

long long int n, p, r;
int i;

int main()
{
    cin>>n>>p;
    do
    {

    	r=pow(n,i);
    	cout<<r<<" ";
    	i+=1;

    }while(pow(n,i)<=p);

    return 0;
}

