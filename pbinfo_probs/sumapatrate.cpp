#include <iostream>
#include <cmath>

using namespace std;

int n, i, s;

int main()
{
    cin>>n;
   	for(i=1;i<=n;i++)
   		s+=pow(i,2);
   	cout<<"Rezultatul este "<<s;
    return 0;
}
