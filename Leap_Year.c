#include <stdio.h> 
int main()
{
    int year ; 
    printf("Input Year : "); 
    scanf("%d" , &year ); 

    if ( ( year%4 == 0 && year%100 != 0 ) || ( year%400 == 0 ) )
    {
        printf("This is a Leap Year."); 
    }
    else 
    {
        printf("This is not a Leap Year."); 
    }
    return 0;
}
