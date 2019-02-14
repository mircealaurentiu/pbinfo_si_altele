/*
Indicatie:
Se observă că suma a zece puteri consecutive are mereu ultima cifră 3.
Se împarte n la 10 şi se reţin câtul şi restul. Câtul ne spune câte grupe de 10 puteri avem,
iar restul cîţi termeni mai rămân negrupaţi.
*/

#include <iostream>
#include <cmath>

using namespace std;
long long int n, c, r;
int main()
{
    cin>>n;
    c=n/10;
    if(n%10==1)
        r=1;
    if(n%10==2)
        r=7;
    if(n%10==3)
        r=8;
    if(n%10==4)
        r=4;
    if(n%10==5)
        r=9;
    if(n%10==6)
        r=5;
    if(n%10==7)
        r=6;
    if(n%10==8)
        r=2;
    if(n%10==9)
        r=3;

    cout<<(c*3+r)%10;
    return 0;
}
