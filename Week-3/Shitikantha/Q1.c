#include<stdio.h>
int gcd(int n1, int n2);
int main()
{
    int n1,n2;
    printf("Enter the two postive numbers = ");
    scanf("%d %d",&n1,&n2);
    printf("The G.C.D of %d and %d is %d",n1,n2,gcd(n1, n2));
    return 0;
}

int gcd (int n1, int n2)
{
    if(n1>n2)
    {
        if(n2!=0)
        {
            return gcd(n2, n1%n2);
        }
        else
        {
            return n1;
        }
    }
    else
    {
        if(n1!=0)
        {
            return gcd(n1, n2%n1);
        }
        else
        {
            return n2; 
        }

    }
}