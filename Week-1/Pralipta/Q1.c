#include <stdio.h>
struct student
{
    char n[50];
    int r;
    char b[20];
    char h[50];
};

int main()

{
    struct student s;

    printf("ENTER STUDENT INFORMATION:- \n");
    printf("----------------------------\n");

    printf("Enter Student's Name :- ");
    scanf("%s",s.n);    

    printf("Enter Registration No.:- ");
    scanf("%d",&s.r);
        
    printf("Enter Branch :- ");
    scanf("%s",&s.b);
    
    printf("Enter Hobbies:- ");
    scanf("%s",&s.h);
    printf("\n----------------------------");

    printf("\nINFORMATION OF STUDENT:\n");
    printf("Name: %s\n",s.n);
    printf("Regd.No: %d\n",s.r);
    printf("Branch: %s\n",s.b);
    printf("Hobbies: %s\n",s.h);

    return 0;

}

