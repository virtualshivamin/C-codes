#include <stdio.h> 
int main()
{
    int num , i , j , count= 1; 
    printf("Input number : "); 
    scanf( "%d" , &num ); 
    for (i = 1; i <= num ; i++)
    {
        for (j = 1 ; j <= i; j++)
        {
            printf( "%d  " , count ); 
            count++; 
        }
        printf("\n"); 
        
    }
    return 0 ; 
}
