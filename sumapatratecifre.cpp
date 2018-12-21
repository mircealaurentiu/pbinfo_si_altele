#include <iostream>

using namespace std;
int a, t, u, z, s;
int main()
{
	cin>>a;
	u=a%10;
	z=a/10%10;
	s=a/100;
	t=u*u+z*z+s*s;
	cout<<t;
    return 0;
}
