#include <iostream>

using namespace std;
long long int n,s_total, s_impar, s_par_mic;
int main()
{
	cin>>n;
	s_total=n*(n+1)/2;
	s_par_mic=(n/2 * (n/2+1));
	s_impar=s_total - s_par_mic;
	cout<<s_impar;
    return 0;
}
