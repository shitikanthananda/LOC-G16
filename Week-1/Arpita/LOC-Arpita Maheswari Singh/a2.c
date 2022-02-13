#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter first number:\n");
   scanf("%d",&a);
   printf("Enter second number:\n");
   scanf("%d",&b);
   if(a>b)
   {
    printf("%d > %d",a,b);
    }
   else
   {
      printf("%d > %d",b,a);
    }
    return 0;
    }