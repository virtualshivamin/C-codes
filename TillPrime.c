#include <stdio.h> 
void main ()
{
    int n,i,j; 
    printf("Input a number : "); 
    scanf( "%d" , &n ); 

    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if ( i%j == 0 )
            {
                printf("not a prime number \n"); 
                break;
            }
            
        }
        
    }

}