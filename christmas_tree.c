#include <stdio.h>
#include <stdlib.h>
int  i, j;
char a[100][100];
int main()
{
    system("COLOR CF");
    for(i=0;i<50;i++)
    for(j=50/2-i;j<=50/2+i;j++)
        a[i][j]=rand()%10;
    for(i=0;i<25;i++)
    {
        for(j=1;j<51;j++)
        {
            if(a[i][j]==2)
                a[i][j]='T';
            if(a[i][j]==7)
                a[i][j]='Q';
        }
    }
    for(i=0;i<25;i++)
    {
        for(j=1;j<51;j++)
            if(a[i][j]>0 && a[i][j]<10)
                printf("%d", a[i][j]);
            else
                printf("%c", a[i][j]);
            printf("\n");
    }
    for(i=0;i<7;i++)
        printf("\t\t      *****\n");

    printf("\n\nNot the best Christmas Tree ever seen, but hey!\n\n");
    printf("Merry Christmas and A Happy New Year!\n\t Tudorascu Laurentiu\n\n");
    return 0;
}
