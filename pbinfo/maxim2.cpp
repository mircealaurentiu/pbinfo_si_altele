#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int a, b;

int main()
{
    ifstream fin("maxim.in");
    ofstream fout("maxim.out");
    fin>>a>>b;
    fout<<max(a,b);
    fin.close();
    fout.close();
    return 0;
}
