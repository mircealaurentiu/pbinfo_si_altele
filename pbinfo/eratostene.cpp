/*
Given n numbers, print how many of them are prime.
*/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <fstream>


using namespace std;

int n, i, j, c, x;

int main()
{
    ifstream fin("eratostene.in");
    ofstream fout("eratostene.out");

    // worst case, n=1.000.000
    // marked with 0 = prime, 1 = not prime
    vector<int> v(1000000, 0); 
    v[0]=1;
    v[1]=1;
    
    for(i=2;i<=sqrt(1000000);i++)
    {
    	if(v[i]==0)
    	{
    		// while we still are "in the array", i*j is at most n, mark all the multiples of the elem. that is prime
    		// for(j=2;j<=1000000/i;j++)
    		for(j=2;j*i<=1000000;j++) 
    			v[i*j]=1;
    	}
    }
    fin>>n;
    for(i=1;i<=n;i++)
    {
    	fin>>x;
    	if(v[x]==0)
    		c++;
    }
    cout<<c;
    fin.close();
    fout.close();
    return 0;
}
