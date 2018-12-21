#include <iostream>

using namespace std;

int n, i, j;
char c, d;

int main()
{
    cin>>n>>c>>d;
    for(i=1;i<=n;i++)
    {
    	if(i%2!=0)
    	{
    		for(j=1;j<=n;j++)
    		{
    			if(j%2==0)
    				cout<<d;
    			else
    				cout<<c;
    		}
    	}

    	else
    	{
    		for(j=1;j<=n;j++)
    		{
    			if(j%2==0)
    				cout<<c;
    			else
    				cout<<d;
    		}
    	}
    	cout<<"\n";
    }
    return 0;
}

