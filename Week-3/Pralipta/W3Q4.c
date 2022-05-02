#include<stdio.h>
void swap(int , int );
int main()
{
    int a,b;
    printf("ENTER A: ");
    scanf("%d",&a);
    printf("\nENTER B: ");
    scanf("%d",&b);
    printf("\nBEFORE SWAPPING\n");
    printf("A is: %d  B is: %d\n",a,b);
    swap(a,b); 
    return 0;
}
void swap(int p, int q)
{
    int c;
    c=p;
    p=q;
    q=c;
    printf("AFTER SWAPPING\n");
    printf("A is: %d  B is: %d",p,q);
}