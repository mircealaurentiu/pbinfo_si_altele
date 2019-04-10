#include <iostream>

using namespace std;
int n, i, s=0;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        if(i%2)
            s+=i*(i+1);
        else
            s-=i*(i+1);
    cout<<"Rezultatul este "<<s;
    return 0;
}
