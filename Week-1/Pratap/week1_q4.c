#include<stdio.h>
int main()
{
    float a,b;
    int n;
    printf("1:Addition\n");
    printf("2:Subtractionn\n");
    printf("3:Multiplication\n");
    printf("4:Division\n");
    printf(" enter two numbers:\n");
    scanf("%f%f",&a,&b);
    printf("Enter choice:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\n addition of %f and %f is %f",a,b,a+b);
        case 2:                 
            printf("\n subtraction of %f and %f is %f",a,b,a-b);
        case 3:
            printf("\n multiplication of %f and %f is %f",a,b,a*b);
        case 4: 
            printf("\n division  of %f and %f is %f",a,b,a/b);
        default:
                printf("invalid choice");
    }
    return 0;
}
