#include <stdio.h> 
int main()
{
    int a, b, c ; 
    printf("Input three sides of triangle : "); 
    scanf("%d %d %d " , &a , &b , &c ); 

    if ( c*c == a*a + b*b || c*c + a*a == b*b || c*c + b*b == a*a )
    {
        printf("This is a right angle Triangle."); 
    }
    else 
    {
        printf("This is not a Right angle Triangle."); 
    }
    return 0; 
}
