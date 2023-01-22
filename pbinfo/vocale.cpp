#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
char s[25], v[]="aeiou";
int i, k;
int main()
{
    cin.getline(s,21);
    for(i=0;i<strlen(s);i++)
    {
        if(strchr(v,s[i])!=0)
            s[i]=s[i]-32;
    }
    cout<<s;
    return 0;
}
