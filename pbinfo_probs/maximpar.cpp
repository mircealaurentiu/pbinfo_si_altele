#include <iostream>
#include <fstream>

using namespace std;

int n, i, x, cate, mx=-1;

int main()
{
    ifstream fin("maximpar.in");
    ofstream fout("maximpar.out");
    fin>>n;
    for(i=1; i<=n; i++)
    {
        fin>>x;
        if(x%2==0)
            if(x>mx)
            {
                mx=x;
                cate=1;
            }
            else if(x==mx)
                cate++;
    }

    if(mx==-1)
        fout<<-1;
    else
    {
        fout<<mx<<" "<<cate;
    }
    fin.close();
    fout.close();
    return 0;


}
