/*program to check the number is even or odd */
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the numbers to be checked :");
    scanf("%d" ,&num);
    switch(num%2)
    {
    case 0:
        printf("the number %d is even " , num);
        break;
    case 1:
        printf("the number %d is odd " , num);
        break;
    }
    return 0;        
}