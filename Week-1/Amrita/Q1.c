#include<stdio.h>

int main()
{
    //prgrm to display basic information
    char a[100],c[100],d[100];
    int b;
    printf("Enter your name:\n");
    scanf("%s",&a);
    printf("Enter last 3 digits of your registration no.: \n");
    scanf("%d",&b);
    printf("Enter your branch: \n");
    scanf("%s",&c);
    printf("Enter your hobbies: \n");
    scanf("%s",&d);
    printf("Name: %s \n",a);
    printf("Registration no.: %d\n",b);
    printf("Branch: %s \n",c);
    printf("Hobbies: %s \n",d);
    return 0;
}