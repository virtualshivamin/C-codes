#include <stdio.h>
int main(){
    int num,temp,sum,l; 

    printf("Input a number : "); 
    scanf("%d" , &num); 

    temp = num ;
    sum = 0; 

    while ( temp > 0 )
    {
        l = temp%10; 
        sum += l*l*l; 
        temp = temp / 10; 
    }

    if (sum == num)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }
    
    return 0; 
}
