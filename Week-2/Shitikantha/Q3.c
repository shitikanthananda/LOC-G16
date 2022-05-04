#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,digit,divide,first,last,swap;
    printf("Enter the number =");
    scanf("%d",&n);
    digit=log10(n);
    divide=pow(10,digit);
    first=n/divide;
    n=n%divide;
    last=n%10;
    n=n/10;
    swap=(last*divide)+(n*10)+first;
    printf("%d",swap);
    return 0;
}
