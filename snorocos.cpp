#include <iostream>
#include <cmath>

using namespace std;
int n, i, frst=1;

int este(int n)
{
	int i, m, s;
	m=n;

	s=(frst+m)*n/2;

	while(s<=n*n)
	{
		if(s==n*n)
			return n;
		else
		{
			frst+=1;
			m+=1;
			s=(frst+m)*n/2;
		}
	}

	return -1;

}

int main()
{
    cin>>n;
   	if(este(n)!=-1)
   	{
   		for(i=frst; i<frst+n; i++)
   			cout<<i<<" ";
   	}
   	else
   		cout<<"NU ESTE NOROCOS";
    return 0;
}
