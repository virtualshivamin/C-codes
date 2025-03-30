//
//  main.c
//  GreatestAmongThreeNumbers
//
//  Created by SHIVAM SINGH on 14/10/22.
//

/*

#include <stdio.h>

int main() {
    
    int a , b, c ;
    
    printf("Input first no : ");
    scanf("%d",&a);
    printf("Input second no : ");
    scanf("%d",&b);
    printf("Input third no : ");
    scanf("%d",&c);
    
    if (a>b)
    {
        if(a>c)
        {
            printf("First No is greatest");
        }
        else
        {
            printf("Third No is greatest");
        }
    }
    else
    {
        if(b>c)
        {
            printf("Second No is greatest");
        }
        else
        {
            printf("Third No is greatest");
        }
    }
    printf("\n");
    
    return 0;
}

*/


#include <stdio.h>

int main() {
    
    int a , b, c ;
    
    printf("Input first no : ");
    scanf("%d",&a);
    printf("Input second no : ");
    scanf("%d",&b);
    printf("Input third no : ");
    scanf("%d",&c);
    
    if (a>b && a>c)
    {
        printf("First no is greatest");
    }
    else if(b>a && b>c)
    {
        printf("Second no is greatest");
    }
    else{
        printf("Third no is greatest");
    }
    printf("\n");
    
    return 0;
}

