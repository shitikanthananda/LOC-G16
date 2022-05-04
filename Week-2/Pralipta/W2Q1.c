#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50], rev[60];
    int i,j,count;
    printf("Enter first string: ");
    scanf("%s",&str1);
    printf("Enter second string: ");
    scanf("%s",&str2);
    strcat(str1, str2);
    while (str1[count] != '\0')
    {
        count++;
    }
    j = count - 1;
    for (i = 0; i < count; i++)
    {
        rev[i] = str1[j];
        j--;
    }
    printf("CONCATENATED REVERSED STRING: %s",rev);
    getch();
    return 0;
}