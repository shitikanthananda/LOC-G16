#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int t1=0,t2=1;
    int nextTerm = t1+t2;
    printf("Enter the number of terms =");
    scanf("%d",&n);

    for(i=3;i<=n;++i)
    {
        printf("%d , ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
return 0;
}
