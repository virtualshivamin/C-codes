#include <stdio.h> 

int main() 
{

    int num; 

    printf("Input a number : "); 
    scanf("%d" , &num); 

    int temp,sum; 
    temp = num ;
    sum = 0; 

    while ( temp > 0 )
    {
        sum += temp%10; // sum = sum + temp%10; 
        temp = temp / 10; 
    }

    printf("%d is sum of digits of %d numbers.\n\n" , sum , num );

    return 0; 
}
