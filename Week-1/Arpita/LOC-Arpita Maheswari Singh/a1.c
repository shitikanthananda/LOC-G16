#include <stdio.h>
int main()
{
int regd_no;
char name[30],branch[30],hobbies[100];
printf("\n Enter_Your_name:");
scanf("%s",&name);
printf("\n Enter_Your_regd_no(only_last_three_digits):");
scanf("%d",&regd_no);
printf("\n Enter_Your_branch:");
scanf("%s",&branch);
printf("\n Enter_Your_hobbies:");
scanf("%s",&hobbies);
printf("\n name:%s",name);
printf("\n branch:%s",branch);
printf("\n regd_no:%d",regd_no);
printf("\n hobbies:%s",hobbies);
    return 0;
}