#include <stdio.h> 
int main()
{
    printf("Input number of terms.");
    int n; 
    scanf("%d" , &n ); 

        int a, b ,c;
        a = 0; 
        b = 1; 

        for( int i = 1 ; i <= n ; i++ )
        {
            c = a + b; 
            printf( "%d    " , c ); 
            a = b; 
            b = c; 
        }
        

    // if ( n == 1 )
    // {
    //     printf("0");
    // }
    // else if( n == 2 )
    // {
    //     printf("0,1");
    // }
    // else
    // {
    //     int a, b ,c;
    //     a = 0; 
    //     b = 1; 

    //     printf("0 , 1 ");

    //     for( int i = 3 ; i <= n ; i++ )
    //     {
    //         c = a + b; 
    //         printf( ", %d" , c ); 
    //         a = b; 
    //         b = c; 
    //     }
    // }

    return 0; 

}