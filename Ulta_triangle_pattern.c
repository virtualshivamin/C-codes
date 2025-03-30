#include <stdio.h> 
int main()
{
    int count ; 
    printf("Input number : "); 
    scanf("%d" , &count ); 

    for (int i = 1; i <= count; i++)
    {
        for (int j = i; j <= count; j++)
        {
            printf("* "); 
        }
        printf("\n"); 
    }
    return 0; 
}


