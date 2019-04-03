#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int n, i, x, s;
int main()
{

    ifstream fin("n_suma.in");
    ofstream fout("n_suma.out");

    fin>>n;
    for(i=1;i<=n;i++)
    {
        fin>>x;
        s+=x;
    }

    fout<<s;

    fin.close();
    fout.close();

    return 0;
}
