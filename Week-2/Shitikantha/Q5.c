#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2] = {1,2,3,4};
    int b[2][2] = {5,6,7,8};
    int c[2][2];
    int d[2][2];
    int i,j,k;

    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]= a[i][j] + b[i][j];
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            d[i][j] = 0;
            for(k=0;k<2;k++)
            {
                d[i][j]+= a[i][k] * b[k][j];
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
