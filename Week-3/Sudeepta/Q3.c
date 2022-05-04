#include<stdio.h>
int check(int n);
int rem;
int main()
{
	int n,r;
	printf("enter a number:   \n");
	scanf("%d",&n);
	rem=n%2;
	r=check(n);
	if(r==1)
        printf(" The number %d is odd  ",n);
    else
        printf(" The number %d is even ",n);
    return 0;
}
int check(int n)
{
	if(rem==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}