#include <iostream>

using namespace std;
int a, b, aux;
char x;
int main()
{
    cin>>a>>b>>x;
    if(b>a)
    {
        aux=a;
        a=b;
        b=aux;
    }
    switch(x)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
    }
    return 0;
}
