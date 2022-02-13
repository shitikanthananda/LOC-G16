#include<stdio.h>

int main()
  {
  	//prgrm to enter two numbers and perform all the arithmetic operations using switch case
  int x,y;
  printf("enter two numbers:\n");
  scanf("%d %d",&x,&y);
  int c;
  printf("enter arithmetic operator: 1-addition\n 2-subtraction\n 3-multiplication\n 4-division\n 5-remainder\n");
  scanf("%d",&c);
  switch (c){
  	case 1:
  	  printf("%d+%d=%d",x,y,x+y);
  	  break;
    case 2:
  	  printf("%d-%d=%d",x,y,x-y);
  	  break;
  	case 3:
  	  printf("%d*%d=%d",x,y,x*y);
  	  break;
  	case 4:
  	  printf("%d/%d=%d",x,y,x/y);
  	  break;
  	case 5:
  	  printf("%d%%d=%d",x,y,x%y);
  	  break;
  	default:
  	  printf("error\n");
  	  break; 
   }
   
  	  return 0;
  }