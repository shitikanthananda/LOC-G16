#include<stdio.h>

int main()
{
    int a, b;
    char option;

    printf("CHOOSE YOUR OPERATION FROM BELOW: \n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%c", &option);


    printf("ENTER YOUR NUMBERS: \n");
    scanf("%d %d", &a, &b);


    switch(option)
    {
    case '1':
        printf("%d + %d = %d\n", a, b, (a+b));
        break;

    case '2':
        printf("%d - %d = %d\n", a, b, (a-b));
        break;

    case '3':
        printf("%d x %d = %d\n", a, b, (a*b));
        break;

    case '4':
        if( b != 0)
            printf("%d / %d = %d\n", a, b, (a/b));
        else
            printf("ZERO CANNOT BE IN THE DENOMINATOR!!!! \n");
        break;

    default:
        printf("YOU SELECTED OUT OF OPTIONS\n");
        break;
    }

}