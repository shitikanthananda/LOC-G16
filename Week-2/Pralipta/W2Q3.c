#include <stdio.h>
#include <math.h>
 
int main()
{
  	int n, fd, count, ld, a, b, swap;
 
  	printf("ENTER A NUMBER : ");
  	scanf("%d", &n);
  	
  	count = log10(n); 	
  	fd = n / pow(10, count);
  	ld = n % 10; 	
  	a = fd * (pow(10,count));
  	b = n%a;
  	n = b / 10;
  	
  	swap= ld* (pow(10, count)) + (n*10 + fd);
	    
	printf(" \n SWAPPED NUMBER:  %d", swap);
 
  	return 0;
}
