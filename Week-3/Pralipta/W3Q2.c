#include<stdio.h>
#include<math.h>
int Prime(int i,int n)
{
    if(n==i)
        return 0;
    else
        if(n%i==0)
            return 1;
    else{
        return Prime(i+1,n);
    }
}
int main()
{
    int n;
    printf("Enter your Number:");
    scanf("%d",&n);

    if(Prime(2,n)==0)
        printf("  PRIME NUMBER!!!");
    else
        printf("  NOT A PRIME NUMBER!!!");
} 