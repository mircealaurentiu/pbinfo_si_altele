#include <iostream>
#include <cmath>

using namespace std;

long long int n, i, s_p_l_j, x, s_t;

int main()
{
    cin>>n;
    for(i=1;i<=n/2;i++)
   		{
   			cin>>x;
   			s_p_l_j+=x;
   		}
    for(i=n/2+1;i<=n;i++)
    {
    	cin>>x;
    	s_t+=s_p_l_j*x;
    }

    cout<<s_t;
    return 0;
}

