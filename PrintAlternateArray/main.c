//
//  main.c
//  PrintAlternateArray
//
//  Created by SHIVAM SINGH on 22/02/22.
//

#include <stdio.h>

int main()
{
    printf("Input the size of array ");
    int n,i;
    scanf("%d",&n);
    int a[n];
    for ( i=0;i<n;i++ )
    {
        printf("Input a number :");
        scanf("%d",&a[i]);
    }
    for ( i=0;i<n;i++ )
    {
        if ( i%2 == 0 )
            printf("%d \t",a[i]);
    }
    // insert code here...   
    printf("\n");
    return 0;
}
