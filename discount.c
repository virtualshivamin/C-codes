#include <stdio.h> 

int main()
{
    int quantity , rate ; 

    printf("Input Quantity and rate.\n"); 
    scanf("%d %d" , &quantity , &rate); 

    int amount; 
    amount = quantity * rate ; 

    if(quantity >100) 
    {
        amount = 0.9 * amount; 
        printf("Amount is %d for quantity %d and at the rate of %d.\n" , amount , quantity , rate ); 
    }
    else
    { 
        printf("Amount is %d for quantity %d and at the rate of %d.\n" , amount , quantity , rate ); 
    }

    return 0; 

}