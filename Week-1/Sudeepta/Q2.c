/*FIND THE MAXIMUN BETWEEN TWO NUMBERS*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers num1 and num2 : ");
    scanf("%d %d" , &num1 , &num2);
    if(num1>num2)
    {
        printf("the maximum number is  :  %d" ,num1);
    }
    else
    {
        printf("the maximum number is  :  %d" ,num2);
    }
    return 0;
}