#include <iostream>
#include <fstream>
using namespace std;
int n,i,j,a[100][100],k,g,q;
int main()
{
    ifstream fin("graf_complet.in");
    ofstream fout("graf_complet.out");
    fin>>g;
    for(q=1;q<=g;q++)
     {
         k=0;
         fin>>n;
         for(i=1;i<=n;i++)
          for(j=1;j<=n;j++)fin>>a[i][j];
         for(i=1;i<=n;i++)
          for(j=i+1;j<=n;j++)if(a[i][j])k++;
          if(k==(n*(n-1))/2)fout<<"DA"<<endl;
           else fout<<"NU"<<endl;
     }
     fin.close();
     fout.close();
    return 0;
}
