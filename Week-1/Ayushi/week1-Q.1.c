#include <stdio.h>
int main() {
    int reg;
    char name[25], branch[25],hobbies[100];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your Reg. no(last three digits):");
    scanf("%d", &reg);
    printf("Enter your branch:");
    scanf("%s",branch);
    printf("Your hobbies:");
    scanf("%s",hobbies);
    printf("\n\n");
    printf("Hello %s\n" ,name);
    printf("The information you entered are\n  Reg No: %d \n Branch : %s \n Hobbies : %s", reg, branch, hobbies);
    return 0;
}