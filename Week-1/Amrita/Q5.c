#include <stdio.h>
 
int main()
{ 
	//prgrm to enter the radius and determine the diameter circumference and area
 float r,d,c,a;
 printf("enter radius of the circle");
 scanf("%f",&r);
 d=2*r;
 printf("diameter of the circle is %f \n",d);
 c=2*3.14*r;
 printf("circumference of the circle is %f \n",c);
 a=3.14*r*r;
 printf("area of the circle is %f \n",a);
	return 0;
}