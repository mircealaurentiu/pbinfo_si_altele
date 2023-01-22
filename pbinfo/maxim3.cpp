#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int a, b, c;

int main()
{
    ifstream fin("maxim3.in");
    ofstream fout("maxim3.out");

    fin>>a>>b>>c;

    fout<<max(max(a,b), max(b,c));
    fin.close();
    fout.close();
    return 0;
}
