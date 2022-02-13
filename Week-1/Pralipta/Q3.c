
#include <stdio.h>
int main()
{
    int a;
    
    printf("ENTER A NUMBER: ");
    scanf("%d", &a);
    switch(a % 2)
    {
    case 0:
        printf("Its An Even Number");
        break;
    case 1:
        printf("Its An Odd Number");
        break;
    }
    return 0;
}