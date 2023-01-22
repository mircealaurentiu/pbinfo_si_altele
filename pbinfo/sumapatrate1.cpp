#include <iostream>

using namespace std;
int n, i=1, s;
int main()
{
    cin>>n;
    do
    {
        s+=i*i;
        i++;
    }while(i*i <= n);
    cout<<"Rezultatul este "<<s;
    return 0;
}
