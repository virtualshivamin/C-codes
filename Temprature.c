#include <stdio.h>

int main ()
{
    int c , f ;
    
    printf("Input Tempratature in degree Centigrade ");
    scanf("%d" , &c); 

    f = c * 1.8 + 32 ; 

    printf("%d degree celcius is %d in Farenhaite. " , c , f ); 

    return 0 ;

}