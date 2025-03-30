//
//  main.c
//  PatternProg1
//
//  Created by SHIVAM SINGH on 25/02/22.
//

#include <stdio.h>

int main()
{
    printf("Input value of n : ");
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    // insert code here...
    printf("\n");
    return 0;
}
