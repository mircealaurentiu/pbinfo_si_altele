#include <iostream>
#include <fstream>

using namespace std;
int a, b;
int main()
{
	ifstream fin("sum.in");
	ofstream fout("sum.out");
	fin>>a>>b;
	fout<<a+b;
    return 0;
}
