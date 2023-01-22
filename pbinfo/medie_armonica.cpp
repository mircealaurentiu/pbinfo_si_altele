#include <iostream>

using namespace std;

int n, i, x;
double m, s;

int main() {
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        s = s + 1.00/x;
    }
    m=n/s;
    printf("%.2lf",m);

    return 0;
}