#include <stdio.h>

int main()
{
    int a, b, temp; 

    printf("Input a number : ");
    scanf("%d %d", &a , &b ); 

    printf("\n\nThe numbers before Swapping is %d and %d\n" , a , b );  

    temp = a; 
    a = b; 
    b = temp; 

    printf("The numbers after Swapping is %d and %d\n\n" , a , b );  


    return 0 ; 

}