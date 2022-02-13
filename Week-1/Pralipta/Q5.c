#include <stdio.h>
int main()
{
    float r,d,c,a;
    printf("ENTER THE RADIUS:- ");
    scanf("%f", &r);
    d=2*r;
    c=(44*r)/7;
    a=(22*r*r)/7;
    printf("THE DIAMETER IS :- %.2f\n",d);
    printf("IT'S CIRCUMFERENCE IS:- %.2f\n",c);
    printf("IT'S AREA IS:- %.2f",a);

    return 0;
}