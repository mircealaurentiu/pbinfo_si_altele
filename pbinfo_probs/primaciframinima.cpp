#include <iostream>

using namespace std;

int prima_cifra(int n)
{
    int m=n;
    while(m>10)
        m/=10;
    return m;
}

int n, i, prima_cifra_min=9, mx=-1, x;

int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(prima_cifra(x)<prima_cifra_min)
            {
                prima_cifra_min=prima_cifra(x);
                mx=x;
            }
        if(prima_cifra(x)==prima_cifra_min)
        {
            if(x>mx)
                mx=x;
        }

    }

    cout<<mx;
    return 0;


}
