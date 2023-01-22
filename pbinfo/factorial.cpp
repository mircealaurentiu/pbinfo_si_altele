#include <iostream>

using namespace std;
int n;

long long int factorial(int n)
{
	if(n==0)
		return 1;

	if(n==1)
		return n;
	else
		return n*factorial(n-1);
}

int main()
{
    cin>>n;
   	cout<<factorial(n);
    return 0;
}
