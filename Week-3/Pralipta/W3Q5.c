#include <stdio.h>
int main()
{
    int i,n;
    double ay[100];
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("ENTER ELEMENT(%d): ", i+1);
        scanf("%lf", &ay[i]);
    }

    for (i=1; i<n; i++)
    {
        if (ay[0] < ay[i])
        {
            ay[0] = ay[i];
        }
    }
    printf("LARGEST ELEMENT: %lf", ay[0]);
    return 0;
}
