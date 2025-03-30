#include <stdio.h> 
// #include <conio.h>

int main ()
{
    int a , b ; 
    printf("Input the two number : "); 
    scanf("%d %d" , &a , &b ); 

    int sum , subt , quetion , remainder , product ; 

    sum = a + b ; 
    subt = a - b ; 
    quetion = a / b ; 
    remainder = a % b ; 
    product = a * b ; 

    printf("Sum of %d and %d is %d.\n" , a , b , sum ); 
    printf("Subtraction of %d and %d is %d.\n" , a , b , subt ); 
    printf("Quetion of %d of %d is %d. \n" , a , b , quetion); 
    printf("Remainder of %d and %d is %d. \n" , a , b , remainder );
    printf("Product of %d and %d is %d. \n" , a, b , product ); 


    return 0; 
}