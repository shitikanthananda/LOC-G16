#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
 int a,b;
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);
 if(a>b)
 {
     printf("\nThe greatest number is:%d",a);
 }
 else if(b>a)
 {
     printf("\nThe greatest number is:%d",b);
 }
 else
 {
     printf("\nBoth are equal.");
 }
 return 0;
}