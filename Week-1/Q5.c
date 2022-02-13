#include <stdio.h>
#include <stdlib.h>
#define pi 3.141

int main()
{
    float r,A,C;
    printf("Enter the radius of the circle = ");
    scanf("%f",&r);
    A=pi*r*r;
    C=2*pi*r;
    printf("The area of the circle is %f\n",A);
    printf("The circumference of the circle is %f",C);
}
