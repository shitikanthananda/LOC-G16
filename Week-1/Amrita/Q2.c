
 
#include <stdio.h>
 
int main()
{
 //prgrm to find max.b/w two numbers
 int a,b;
 printf("enter two numbers\n");
 scanf("%d %d",&a,&b);
 if(a>b){
 	printf("%d is greater than %d",a,b);
 	}
 else{
 	printf("%d is greater than %d",b,a);
 	}
	return 0;
}