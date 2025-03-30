#include <stdio.h>

int main()
{
    int n; 

    printf("Input a number : ");
    scanf("%d" , &n );

    printf("\n\n\n\n");

    for( int i = 1 ; i<=10 ; i++ )
    {
        printf("%d x %d = %d \n" , n , i , (n*i)); 
    }  

    printf("\n\n\n\n");


    return 0 ; 

}