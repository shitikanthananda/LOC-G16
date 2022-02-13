#include<stdio.h>
#include<math.h>
int main()
{
    float rad,dia,circum,area;
    printf("Enter the radius:");
    scanf("%f" ,&rad);
    dia = 2*rad;
    circum = 2*3.14*rad;
    area = 3.14*rad*rad;
    printf("diameter:%f\n" ,dia);
    printf("circum:%f\n" ,circum);
    printf(" area:%f\n",area);
    return 0;
}