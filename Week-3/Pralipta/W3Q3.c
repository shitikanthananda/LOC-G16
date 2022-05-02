#include <stdio.h>
void check();
int main()
{
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    check(n);
}
void check(int n)
{
    if(n%2==0)
    {
        printf("IT'S EVEN!!!");
    }
    else
    {
        printf("IT'S ODD!!!");
    }
}