#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int a;
  printf("Enter a number:\n");
  scanf("%d",&a);
  switch(a%2)
  {
    case 0:
      printf("%d is even",a);
      break;
    case 1:
      printf("%d is odd",a);
      break;
  }
  return 0;
}