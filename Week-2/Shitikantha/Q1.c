#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char a[30],b[30],i,l;
    printf("Enter the first string = ");
    gets(a);
    printf("Enter the second string = ");
    gets(b);
    strcat(a,b);
    strrev(a);
    puts(a);
}
