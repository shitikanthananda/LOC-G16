#include<stdio.h>

int even_odd(int num);

int main()
{
    int num;
    printf("Enter the number to check odd or even = ");
    scanf("%d",&num);
    even_odd(num);
    return 0;
}

int even_odd( int num)
{
    if(num%2 == 0)
    {
        printf("%d is an even number.",num);
    }
    else
    {
        printf("%d is an odd number.",num);
    }
}