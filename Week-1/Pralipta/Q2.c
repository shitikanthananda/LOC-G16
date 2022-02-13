#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is greater",a);
    }
    if(b>a)
    {
        printf("%d is greater",b);
    }
    else
    {
        printf("Both Are Equal");
    }
}