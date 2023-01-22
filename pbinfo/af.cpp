#include <iostream>
#include <fstream>

using namespace std;

int n, i, x;
long long int nr1, nr2, nr3;
char op, eg;

int main()
{
    ifstream fin("af.in");
    ofstream fout("af.out");
    fin>>n;
    for(i=1;i<=n;i++)
    {
        fin>>nr1>>op>>nr2>>eg>>nr3;

        switch(op)
        {
            case '+':
                if(nr1+nr2==nr3)
                    fout<<"Adevarat";
                else
                    fout<<"Fals";
                break;

                case '-':
                if(nr1-nr2==nr3)
                    fout<<"Adevarat";
                else
                    fout<<"Fals";
                break;

                case 'x':
                if(nr1*nr2==nr3)
                    fout<<"Adevarat";
                else
                    fout<<"Fals";
                break;

                case ':':
                if(nr2==0)
                    fout<<"Fals";
                else if(nr1/nr2==nr3)
                    fout<<"Adevarat";
                else
                    fout<<"Fals";
                break;
        }

        fout<<"\n";
    }
    return 0;
}

