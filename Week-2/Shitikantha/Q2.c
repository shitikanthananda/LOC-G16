#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[30],i,n,s1=0,s2=0;
    printf("Enter the elements = ");
    scanf("%d",&n);
    printf("Enter the 10 elements = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s1=s1+a[i];
        }
        else
        {
            s2=s2+a[i];
        }
    }
    printf("Sum of odd integers = %d\n",s2);
    printf("Sum of even integers = %d\n",s1);

return 0;
}
