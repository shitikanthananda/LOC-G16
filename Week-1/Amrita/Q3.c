#include <stdio.h>
 
int main()
{
	//prgrm to check whether a number is even or odd using switch case
  int a;
  printf("enter a number \n");
  scanf("%d",&a);
  switch (a%2){
  	case 0:
  	   printf("entered number is even\n");
  	   break;
  	default:
  	   printf("entered number is odd \n");
  	   break;
  }
	return 0;
}