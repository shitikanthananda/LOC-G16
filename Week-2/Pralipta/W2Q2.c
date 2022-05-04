#include <stdio.h>

int main()
{
    int n[10];
    int i, Oddsum, Evensum;

    for( i=1; i<11; i++ )
    {
        printf( "Enter number%d : ",i );
        scanf( "%d", &n[i] );
        if( n[i]%2 == 0 )
            Evensum+= n[i];
        else
            Oddsum+= n[i];
    }
    printf( "EVEN SUM : %d", Evensum );
    printf( "\nODD SUM : %d", Oddsum);

    return 0;
}