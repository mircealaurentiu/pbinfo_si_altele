#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

string nt, note[8]= {"do1", "re", "mi", "fa", "sol", "la", "si", "do2"};

int rez(string c)
{
    if(c=="do1")
        return 0;
    if(c=="re")
        return 1;
    if(c=="mi")
        return 2;
    if(c=="fa")
        return 3;
    if(c=="sol")
        return 4;
    if(c=="la")
        return 5;
    if(c=="si")
        return 6;
    if(c=="do2")
        return 7;
}

int n, i, s;

int main()
{
    ifstream fin("muzical.in");
    ofstream fout("muzical.out");
    
    fin>>n;
    for(i=1; i<=n; i++)
    {
        fin>>nt;
        s+=rez(nt);
    }
    fout<<note[s%8];
    
    fin.close();
    fout.close();
    return 0;
}
