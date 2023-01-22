#include <iostream>

using namespace std;
int a,u,z;
int main()
{
	cin>>a;
	u=a%10;
	z=a/10;
	a=10*u+z;
	cout<<a*a;
    return 0;
}
