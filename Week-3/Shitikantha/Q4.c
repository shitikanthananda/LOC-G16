#include<stdio.h>

void swap(int , int);

int main()
{
    int x,y;
    printf("Enter the first number = ");
    scanf("%d",&x);
    printf("Enter the second number = ");
    scanf("%d",&y);
    printf("Before Swapping : x = %d, y = %d",x,y);
    swap(x, y);
    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    printf("\nAfter Swapping : x = %d, y= %d",x,y);
}

