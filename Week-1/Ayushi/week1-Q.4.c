#include<stdio.h>

int main()
{
    int num1 ,num2 ,Sum ,Sub ,Mul;
    float Div;
    int choice;
    printf("Enter any two numbers:\n");
    scanf("%d %d" ,&num1 ,&num2);
    printf("1.Sum\n 2.Sub\n 3.Mul\n 4.Div\n");
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
        Sum = num1 + num2;
        printf("%d" , Sum);
        break;
     case 2:
        Sub = num1 - num2;
        printf("%d" , Sub);
        break;
     case 3:
        Mul = num1 *num2;
        printf("%d" , Mul);
        break;
     case 4:
        Div = num1/num2;
        printf("%f" ,Div);
        break;

     default:
        printf("Enter another choice:\n");

    
    }
    return 0;
}