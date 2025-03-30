#include <stdio.h> 
int main ()
{
    int n, count = 0; 
    printf("Input a number : "); 
    scanf( "%d" , &n ); 

    for (int  i = 2; i < n; i++)
    {
        if( n%i == 0 )
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("Prime number");
    }
    else
    {
        printf("Non Prime number"); 
    }

}



/*
#include <stdio.h> 
void main ()
{
    int n; 
    printf("Input a number : "); 
    scanf( "%d" , &n ); 

    for (int  i = 2; i <= n; i++)
    {
        if( n%i == 0 )
        {
            printf("\nNot a Prime number");
            return; 
        }
    }

    printf("Prime number"); 

}
*/