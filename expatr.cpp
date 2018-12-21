#include <iostream>
#include <cmath>

using namespace std;
double a;
int main()
{
	cin>>a;
	double that_exp=0, fin;
	that_exp = pow(a,2) + pow(a,4);
	fin = (3*that_exp) / (that_exp + sqrt(that_exp)) + sqrt(that_exp);
	cout<<(int)fin;
    return 0;
}
